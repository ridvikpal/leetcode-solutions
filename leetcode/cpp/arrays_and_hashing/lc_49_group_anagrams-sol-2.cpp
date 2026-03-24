#include <string>
#include <vector>
#include <array>
#include <unordered_map>
#include <algorithm>

/**
 * https://leetcode.com/problems/group-anagrams/description/
 */
class Solution {
public:
    std::array<int, 26> countChars(const std::string& str) {
        std::array<int, 26> counter{};

        for (char chr: str) {
            counter[static_cast<int>(chr) - static_cast<int>('a')] += 1;
        }

        return counter;
    }

    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>> result;
        std::unordered_map<std::string, std::vector<std::string>> anagramMap;

        for (const std::string& str: strs) {
            std::array<int, 26> counter = countChars(str);

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
