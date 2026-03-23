#!/bin/python3

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

'''
https://www.hackerrank.com/challenges/plus-minus/problem
'''
def plusMinus(arr):
    # init our variables to store
    # the count of each type of
    # number
    positive_count = 0
    negative_count = 0
    zero_count = 0
    
    # loop through all numbers in the array
    for num in arr:
        # if the number is positive
        if num > 0:
            # increment the positive count
            positive_count += 1
        # if the number is negative
        elif num < 0:
            # increment the negative count
            negative_count += 1
        # else the number is 0
        else:
            # increment the zero count
            zero_count += 1
            
    # print the ratios, which are all
    # count / total number of elements in array
    print(positive_count/len(arr))
    print(negative_count/len(arr))
    print(zero_count/len(arr))
