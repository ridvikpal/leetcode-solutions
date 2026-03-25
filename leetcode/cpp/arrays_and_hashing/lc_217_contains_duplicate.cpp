#include <vector>
#include <unordered_set>

/**
 * https://leetcode.com/problems/contains-duplicate/description/
 *
 * Time complexity: O(n) where n = length of nums
 * Space complexity: O(n) where n = length of nums
 */
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;

        for (const int& num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};
