#!/bin/python3

import sys

l=[]

n = int(input().strip())
for a0 in range(n):
    grade = int(input().strip())
    if(grade<37):
        l.append(grade)
        continue
    diff=grade%5
    if(diff>2):
        grade+=5-diff
    l.append(grade)
for grade in l:
    print(grade)
