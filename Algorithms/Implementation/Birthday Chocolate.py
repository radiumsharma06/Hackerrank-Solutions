#!/bin/python3

import sys

def getWays(l,d,m):
    count=0
    for i in range(0,len(l)-m+1):
        total=sum(l[i:i+m])
        if total==d:
            count+=1
    return count    
            

n = int(input().strip())
s = list(map(int, input().strip().split(' ')))
d,m = input().strip().split(' ')
d,m = [int(d),int(m)]
result = getWays(s,d,m)
print(result)
