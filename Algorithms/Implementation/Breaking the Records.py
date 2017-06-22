#!/bin/python3

import sys


n = int(input().strip())
score = list(map(int, input().strip().split(' ')))
mini,maxi=score[0],score[0]
c1,c2=0,0
for s in score:
    if(s<mini):
        mini=s
        c2+=1
    if(s>maxi):
        maxi=s
        c1+=1
print(c1,c2)