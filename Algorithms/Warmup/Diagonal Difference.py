#!/bin/python3

import sys


n = int(input().strip())
a = []
for a_i in range(n):
    a_t = [int(a_temp) for a_temp in input().strip().split(' ')]
    a.append(a_t)
    
sum1,sum2=0,0 

for i in range(n):
    for j in range(n):
        if i==j:
            sum1+=a[i][j]
        if i+j==n-1:
            sum2+=a[i][j]
            
total=abs(sum1-sum2)
            
print(total)            