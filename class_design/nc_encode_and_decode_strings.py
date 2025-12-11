from typing import List


'''
https://neetcode.io/problems/string-encode-and-decode/question
'''
class Solution:
    # trick is to have delimiter like this:
    # number of characters in upcoming string + special char

    def encode(self, strs: List[str]) -> str:
        # initialize our final encoded string
        encoding = ""

        # loop through all strings in input array
        for string in strs:
            # add the length of the string + ;
            # as our delimiter
            encoding += str(len(string)) + ';'
            # then add the string itself
            encoding += string

        # finally return the encoding
        return encoding

    def decode(self, s: str) -> List[str]:
        # initialize our final decoded list
        decoding = []

        # begin looping through the entire input string
        # at index 0
        i = 0
        # loop until we are out of bounds of the input string
        while i < len(s):
            # set our second pointer j, beginning at i
            j = i
            # loop until j does not equal our special char ';'
            while s[j] != ';':
                j += 1
        
            # our number of characters will always be
            # from i -> j-1
            # store our number of characters
            num_of_chars = int(s[i:j])
            
            # get the string from j+1 (to skip ;)
            # to the end of the string j+num_of_chars
            string = s[j+1:j+1+num_of_chars]
            # add the string to our decoding list
            decoding.append(string)

            # now we want to move i to the end of this word
            # so increment to j+1+num_of_chars
            i = j+1+num_of_chars
        
        # return our decoded list
        return decoding
