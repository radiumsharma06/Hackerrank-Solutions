#!/bin/python3
import sys
n = int(input().strip())
p = int(input().strip())
x,y=p//2,(n-p)//2
print(min(x,y))
