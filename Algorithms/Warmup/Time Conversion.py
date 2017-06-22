#!/bin/python3

import sys

time = input().strip()
t=time.split(':')
zone=t[2][-2:]
if zone=='PM' and t[0]!='12':  
    t[0]=str(int(t[0])+12)   
elif zone=='AM' and t[0]=='12':
    t[0]='00'
t[2]=t[2][:-2]
t=':'.join(t)
print(t)
