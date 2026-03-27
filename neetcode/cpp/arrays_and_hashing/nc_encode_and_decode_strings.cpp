#include <string>
#include <vector>

/**
 * https://neetcode.io/problems/string-encode-and-decode/question
 *
 * Time complexity: O(n) where n is length of strs
 * Space complexity: O(n) where n is length of strs
 */
class Solution {
public:

    const char SPECIAL_CHAR = '#';

    std::string encode(std::vector<std::string>& strs) {
        std::string result;

        for (const std::string& str : strs) {
            result += std::to_string(str.size()) + SPECIAL_CHAR + str;
        }

        return result;
    }

    std::vector<std::string> decode(std::string s) {
        std::vector<std::string> result;

        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != SPECIAL_CHAR) {
                ++j;
            }

            const int numChars = std::stoi(s.substr(i, j-i));
            i = j+1;

            result.push_back(s.substr(i, numChars));
            i += numChars;
        }

        return result;
    }
};
