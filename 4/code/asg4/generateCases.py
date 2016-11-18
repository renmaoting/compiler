#!/usr/bin/python

import os, sys
import random 

def generateCases():
    num = random.randint(30, 40)
    for i in range(num):
        exp = str(random.randint(-15, 15))
        cnt = 1
        while 1:
            cnt += 1;
            if random.randint(0, 100) > 80 or cnt > 7:
                break;
            op = random.randint(0, 7)
            val = random.randint(1, 15)
            if op == 0: exp += '+'
            elif op == 1: exp += '-'
            elif op == 2: exp += '*'
            elif op == 3: exp += '/'
            elif op == 4: exp += '%'
            elif op == 5: exp += '**'
            else: exp += '//'
            exp += str(val)
        ans = 0
        try:
            ans = eval(exp)
        except ValueError:
            pass
        
        ansexp = 'print ' + exp+'\n';
        fp = open('cases/'+str(i)+'.py', 'w');
        fp.write(ansexp)
        fp.close()
        fp = open('cases/'+str(i)+'.out', 'w');
        fp.write(str(ans)+'\n')
        fp.close()

generateCases()

