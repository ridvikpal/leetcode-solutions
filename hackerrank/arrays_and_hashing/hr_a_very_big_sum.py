#!/bin/python3

#
# Complete the 'aVeryBigSum' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts LONG_INTEGER_ARRAY ar as parameter.
#

'''
https://www.hackerrank.com/challenges/a-very-big-sum/problem
'''
def aVeryBigSum(ar):
    # we don't need to worry about size of number
    # in python 3, it handles long and int for us
    # automagically, we can directly use sum()
    return sum(ar)
