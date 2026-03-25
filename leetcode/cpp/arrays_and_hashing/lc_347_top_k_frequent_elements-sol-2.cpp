#include <vector>
#include <unordered_map>

/**
 * https://leetcode.com/problems/top-k-frequent-elements/description/
 *
 * Time complexity: O(n) where n = length of nums
 * Space complexity: O(n) where n = length of nums
 */
class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> counter;
        // this is essentially bucket sorting
        // index = frequency the number shows up
        // value = array of the numbers with this frequency
        std::vector<std::vector<int>> frequencyToNums(nums.size()+1);
        std::vector<int> result;

        for (const int& num : nums) {
            counter[num] += 1;
        }

        for (const std::pair<int, int>& element : counter) {
            frequencyToNums[element.second].push_back(element.first);
        }

        // loop through the frequncyToNums array backwards and populate
        // the results array until we have k elements in the results array
        for (int i{static_cast<int>(frequencyToNums.size()) - 1}; i >= 0; --i) {
            if (result.size() == k) {
                break;
            }

            result.insert(result.end(), frequencyToNums[i].begin(), frequencyToNums[i].end());
        }

        return result;
    }
};
