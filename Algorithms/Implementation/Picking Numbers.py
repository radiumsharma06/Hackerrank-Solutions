#!/bin/python3

import sys

n = int(input().strip())
a = [int(a_temp) for a_temp in input().strip().split(' ')]
a.sort()
maxi,i,count,prev=1,0,1,a[0]
for i in range(len(a)-1):
    if a[i+1]==a[i]:
        count+=1
    elif a[i+1]-prev==1:
        count+=1
    else:
        count=1
        prev=a[i+1]
    if(maxi<count):
        maxi=count    
print(maxi)