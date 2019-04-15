#!/bin/python

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c, n):
    current = 0
    end = n - 1
    jumps = 0
    while current < end:
        if ((current + 2) <= end) and (c[current + 2] == 0):
            current += 2
            jumps += 1
        elif c[current + 1] == 0:
            current += 1
            jumps += 1
    return jumps
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    c = map(int, raw_input().rstrip().split())

    result = jumpingOnClouds(c,n)

    fptr.write(str(result) + '\n')

    fptr.close()
