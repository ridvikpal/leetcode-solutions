#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

/**
 * https://leetcode.com/problems/group-anagrams/description/
 */
class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>> result;
        std::unordered_map<std::string, std::vector<std::string>> anagramMap;

        for (const std::string& str: strs) {
            std::string str_key = str;
            std::sort(str_key.begin(), str_key.end());

            anagramMap[str_key].push_back(str);
        }

        for (const auto& anagramMapPair: anagramMap) {
            result.push_back(anagramMapPair.second);
        }

        return result;
    }
};
