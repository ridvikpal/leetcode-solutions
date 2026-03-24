#include <vector>
#include <unordered_set>

/**
 * https://leetcode.com/problems/contains-duplicate/description/
 */
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;

        for (const int& num: nums) {
            if (seen.find(num) != seen.end()) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};
