#include <vector>
#include <unordered_map>

/**
 * https://leetcode.com/problems/two-sum/description/
 */
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result;
        std::unordered_map<int, int> seen;

        for (int i{0}; i < nums.size(); ++i) {
            int difference = target - nums[i];
            auto iterator = seen.find(difference);

            if (iterator != seen.end()) {
                result.push_back(iterator->second);
                result.push_back(i);

                return result;
            }

            seen[nums[i]] = i;
        }

        return result;
    }
};
