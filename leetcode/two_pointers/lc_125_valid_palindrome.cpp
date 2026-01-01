#include <string>

/**
 * https://leetcode.com/problems/valid-palindrome/description/
 */
class Solution {
public:
    bool isPalindrome(std::string s) {
        // first handle the edge case where the
        // the string is empty
        if (s.size() == 0) {
            // in this case we immediately return true
            // an empty string is a palindrome
            return true;
        }

        // we will use a two pointer approach
        // init our left pointer to point to the first char
        int left{0};
        // init our right pointer to point to the last char
        int right{static_cast<int>(s.size()-1)};

        // loop as long as the pointers don't overlap
        while (left < right) {
            // we want to skip chars that are not alphanumeric
            // so loop as long as the left pointer is in bounds
            // and we don't have an alpahnumeric left char
            while (left < right && !(std::isalnum(s[left]))) {
                // skip to the next left char by incrementing
                ++left;
            }

            // we want to skip chars that are not alphanumeric
            // so loop as long as the right pointer is in bounds
            // and we don't have an alpahnumeric right char
            while (right > left && !(std::isalnum(s[right]))) {
                // skip to the next right char by incrementing
                --right;
            }

            // compare the current left and right chars
            // after converting to lowercase
            if (std::tolower(s[left]) != std::tolower(s[right])) {
                // if they are not the same, we don't have a palindrome
                // so return false
                return false;
            }

            // on each iteration increment left pointer
            // to point to next left char
            ++left;
            // and decrement right pointer
            // to point to next right char
            --right;
        }

        // finally if we get to this point, then we have checked
        // every char and not found any violation of palindrome rules
        // so return true
        return true;
    }
};
