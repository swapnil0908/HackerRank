#!/bin/python

import math
import os
import random
import re
import sys

# Complete the repeatedString function below.
def repeatedString(s, n):
    count = 0
    ans = 0
    c=0
    for i in s:
        if i == 'a':
            count+=1
    ans = (n/len(s))*count
    r = n%len(s)
    #print count
    print ans
    print r
    if(n%len(s)):
        for i in s:
            c+=1
            if i == 'a' and c<=r:
                ans+=1
    return ans

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = raw_input()

    n = int(raw_input())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
