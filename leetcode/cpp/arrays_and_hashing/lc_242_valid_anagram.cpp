#include <string>
#include <unordered_map>

/**
 * https://leetcode.com/problems/valid-anagram/description/
 *
 * Time complexity: O(n) where n = longest string length between s and t
 * Space complexity: O(1) because there can only be 26 letters used
 */
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, int> s_counter;
        std::unordered_map<char, int> t_counter;

        for (const char& s_char : s) {
            s_counter[s_char] += 1;
        }

        for (const char& t_char : t) {
            t_counter[t_char] += 1;
        }

        if (s_counter == t_counter) {
            return true;
        }

        return false;
    }
};
