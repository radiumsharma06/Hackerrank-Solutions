#!/bin/python3

import sys
q = int(input().strip())
for a0 in range(q):
    x,y,z = input().strip().split(' ')
    x,y,z = [int(x),int(y),int(z)]
    x,y=abs(z-x),abs(z-y)
    if x<y:
        print('Cat A')
    elif y<x:
        print('Cat B')
    else:
        print('Mouse C')
