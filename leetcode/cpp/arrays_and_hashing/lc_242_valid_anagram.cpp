#include <string>
#include <unordered_map>

/**
 * https://leetcode.com/problems/valid-anagram/description/
 */
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, int> s_counter;
        std::unordered_map<char, int> t_counter;

        for (char s_char: s) {
            s_counter[s_char] += 1;
        }

        for (char t_char: t) {
            t_counter[t_char] += 1;
        }

        if (s_counter == t_counter) {
            return true;
        }

        return false;
    }
};
