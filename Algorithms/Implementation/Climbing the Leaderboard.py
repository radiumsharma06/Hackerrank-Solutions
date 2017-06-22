#!/bin/python3

import sys
from bisect import bisect


n = int(input().strip())
scores = [int(scores_temp) for scores_temp in input().strip().split(' ')]
m = int(input().strip())
alice = [int(alice_temp) for alice_temp in input().strip().split(' ')]
scores=set(scores)
scores=sorted(scores)
for score in alice:
    x=bisect(scores,score)
    x=len(scores)-x+1
    print(x)
