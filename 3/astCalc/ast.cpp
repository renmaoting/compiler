// Companion source code for "flex & bison", published by O'Reilly
// helper functions for fb3-1
#  include <iostream>
#  include <stdlib.h>
#  include "ast.h"

void preOrder(Ast* node, std::ofstream& fout, char preId, int &curNode)
{
    int curNodeId = ++curNode;
    fout <<"    " << char('A'+curNodeId) << " [label = \"" << node->getLabel() << "\"];" << std::endl;
    fout <<"    " <<  preId<< " -> " << char('A' + curNodeId) << ";" << std::endl;      
    if(node->getLeft()) preOrder(node->getLeft(), fout, 'A'+curNodeId, curNode);
    if(node->getRight()) preOrder(node->getRight(), fout, 'A'+curNodeId, curNode);
}


void showFormat(Ast*)
{

}
void makeGraph(Ast* a)
{
    if(!a) return;
    std::ofstream fout;
    fout.open("graph.gv");    
    fout << "digraph G {" << std::endl;
    int curNode = 0;
    fout << "    " << "A [label = \"" << a->getLabel() << "\"];" << std::endl;
    if(a->getLeft()) preOrder(a->getLeft(), fout, 'A', curNode);
    if(a->getRight()) preOrder(a->getRight(), fout, 'A', curNode);
    fout << "}" << std::endl;;
    fout.close();
}
