#!/bin/python3
import sys
n = int(input().strip())
types = list(map(int, input().strip().split(' ')))
dic={}
for i in types:
    dic[i]=0
maxi,key=0,0    
for i in types:
    dic[i]+=1
    if dic[i]>maxi:
        maxi=dic[i]
        key=i
    elif dic[i]==maxi:
        if i<key:
            key=i
print(key)
