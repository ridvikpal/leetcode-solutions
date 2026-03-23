#!/bin/python3

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

'''
https://www.hackerrank.com/challenges/diagonal-difference/problem
'''
def diagonalDifference(arr):
    # first we can calculate the side length
    # of this square matrix
    side_length = len(arr)
    
    # we can init our diagonal sums
    left_right_diagonal = 0
    right_left_diagonal = 0
    
    # we can loop through all indices
    # of the side lengths
    for i in range(side_length):
        # sum up each left_right_diagonal element
        left_right_diagonal += arr[i][i]
        # sum up each right_left_diagonal element
        right_left_diagonal += arr[i][side_length-1-i]
        
    # finally return the absolute difference between
    # the sum of it's diagonals
    return abs(left_right_diagonal - right_left_diagonal)
