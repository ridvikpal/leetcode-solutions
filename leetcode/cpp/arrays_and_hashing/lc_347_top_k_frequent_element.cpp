#include <vector>
#include <unordered_map>
#include <algorithm>

/**
 * https://leetcode.com/problems/top-k-frequent-elements/description/
 */
class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> counter;
        std::vector<int> result;

        for (const int& num: nums) {
            counter[num] += 1;
        }

        for (int i{0}; i < k; i++) {
            auto iterator = std::max_element(counter.begin(), counter.end(),
                [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
                    return a.second < b.second;
                });

            result.push_back(iterator->first);
            counter.erase(iterator->first);
        }

        return result;
    }
};
