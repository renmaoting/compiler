// Companion source code for "flex & bison", published by O'Reilly
// helper functions for fb3-1
#  include <iostream>
#  include <stdlib.h>
#  include "ast.h"

void preOrder(Ast* node, std::ofstream& fout, char preId, int &curNode)
{
    int curNodeId = ++curNode;
    printNodeFormat(node, 'A'+curNodeId, fout);
    fout <<"    " <<  preId<< " -> " << char('A' + curNodeId) << ";" << std::endl;      
    if(node->getLeft()) preOrder(node->getLeft(), fout, 'A'+curNodeId, curNode);
    if(node->getRight()) preOrder(node->getRight(), fout, 'A'+curNodeId, curNode);
}

void printNodeFormat(Ast *node, char ID, std::ofstream& fout)
{
    std::string label = node->getLabel();
    fout << "    " << ID << " [label = \"" << label << "\", style=filled, ";
    if(label=="-" && !node->getRight())     
        fout << "color=yellow, shape = box];" << std::endl;
    else if(label=="+" || label=="-" || label=="*" || label=="/" || label=="**")
        fout << "color=lightblue];" << std::endl;
    else if(!node->getLeft() && !node->getRight())
        fout << "color=green, shape=diamond];" << std::endl;
    else throw std::string("unknow node type in printNodeFormat()");
}

void makeGraph(Ast* a)
{
    if(!a) return;
    std::ofstream fout;
    fout.open("graph.gv");    
    fout << "digraph G {" << std::endl;
    int curNode = 0;
    printNodeFormat(a, 'A', fout);
    if(a->getLeft()) preOrder(a->getLeft(), fout, 'A', curNode);
    if(a->getRight()) preOrder(a->getRight(), fout, 'A', curNode);
    fout << "}" << std::endl;;
    fout.close();
    system("dot -Tpng -o resultGraph.png graph.gv");
}
