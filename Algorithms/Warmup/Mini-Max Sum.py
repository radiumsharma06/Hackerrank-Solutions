#!/bin/python3

import sys

arr = list(map(int, input().strip().split(' ')))
l=sorted(arr)
mini=l[:4]
maxi=l[1:]
print(str(sum(mini))+' '+str(sum(maxi)))
