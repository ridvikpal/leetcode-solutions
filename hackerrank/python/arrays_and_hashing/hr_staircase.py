#!/bin/python3

#
# Complete the 'staircase' function below.
#
# The function accepts INTEGER n as parameter.
#

'''
https://www.hackerrank.com/challenges/staircase/problem
'''
def staircase(n):
    # loop from 1 to n
    # this is the number of hashtags
    # to print on each level
    for num_hashtag in range(1, n+1):
        # calculate the number of spaces to print
        num_spaces = n-num_hashtag
        
        # loop num_spaces number of times
        for j in range(num_spaces):
            # first print all the spaces
            print(' ', end='')
            
        # loop num_hashtag number of times
        for j in range(num_hashtag):
            # then print all the hashtags
            print('#', end='')
        
        # finally print an empty space at the end
        print()
