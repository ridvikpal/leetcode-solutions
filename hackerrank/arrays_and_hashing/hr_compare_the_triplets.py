#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'compareTriplets' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#

'''
https://www.hackerrank.com/challenges/compare-the-triplets/problem
'''
def compareTriplets(a, b):
    # init alice's score
    alice_score = 0
    # init bob's score
    bob_score = 0
    
    # loop through all indices in a
    for i in range(len(a)):
        # if a[i] > b[i] then alice gets a point
        if a[i] > b[i]:
            alice_score += 1
        # if a[i] < b[i] then bob gets a point
        elif a[i] < b[i]:
            bob_score += 1
    
    # finally return both alice and bob's scores
    return [alice_score, bob_score]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
