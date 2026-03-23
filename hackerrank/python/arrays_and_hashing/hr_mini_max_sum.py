#!/bin/python3

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # first sum up all numbers in the array
    five_sum = sum(arr)
    
    # init our minimum four sum as the five sum
    min_sum = five_sum
    # init our max four sum as 0
    # since all numbers are positive
    max_sum = 0
    
    # loop through all numbers in the array
    for num in arr:
        # calculate the four sum without this number
        four_sum = five_sum-num
        # update the min sum accordingly
        min_sum = min(min_sum, four_sum)
        # update the max sum accordingly
        max_sum = max(max_sum, four_sum)
        
    # finally, print the min sum and the max sum
    print(min_sum, max_sum)
