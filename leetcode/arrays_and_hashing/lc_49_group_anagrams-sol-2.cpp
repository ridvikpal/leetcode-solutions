#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

/**
 * https://leetcode.com/problems/group-anagrams/description/
 */
class Solution {
public:
    std::vector<int> countChars(const std::string& str) {
        std::vector<int> counter(26, 0);

        for (char chr: str) {
            counter[static_cast<int>(chr) - static_cast<int>('a')] += 1;
        }

        return counter;
    }

    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>> result;
        std::unordered_map<std::string, std::vector<std::string>> anagramMap;

        for (const std::string& str: strs) {
            std::vector<int> counter = countChars(str);

            std::string key = "";

            for (const int& count: counter) {
                key += std::to_string(count) + '#';
            }

            anagramMap[key].push_back(str);
        }

        for (const auto& anagramMapPair: anagramMap) {
            result.push_back(anagramMapPair.second);
        }

        return result;
    }
};
