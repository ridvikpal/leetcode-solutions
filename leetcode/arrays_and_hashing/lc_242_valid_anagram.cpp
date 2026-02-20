#include <string>
#include <unordered_map>

/**
 * https://leetcode.com/problems/valid-anagram/description/
 */
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        // first handle the edge case where
        // the two strings are of different size
        if (s.size() != t.size()) {
            // in this case, it's impossible
            // for them to be anagrams
            // so return false
            return false;
        }

        // Create a hashmap to count
        // the characters in string s
        std::unordered_map<char, int> sCharCount;
        // Create a hashmap to count
        // the characters in string t
        std::unordered_map<char, int> tCharCount;

        // loop through all characters in string s
        for (auto& character: s) {
            // increment the count for this character
            // in our s char count hashmap
            ++sCharCount[character];
        }

        // loop thorugh all characters in string t
        for (auto& character: t) {
            // increment the count for this character
            // in our t char count hashmap
            ++tCharCount[character];
        }

        // only return true if the two hashmaps
        // are the same
        return sCharCount == tCharCount;
    }
};
