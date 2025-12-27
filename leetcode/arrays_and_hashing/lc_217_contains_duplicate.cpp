#include <vector>
#include <unordered_set>

/**
 * https://leetcode.com/problems/contains-duplicate/description/
 */
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        // create our seen set, which will
        // contain numbers we have seen as
        // we iterate through nums
        std::unordered_set<int> seen{};
        
        // loop through all nums
        for (const auto& num: nums) {
            // check if we have seen this number before
            if (seen.contains(num)) {
                // if we have, then we have found a duplicate
                // so return true
                return true;
            }

            // otherwise, insert it into the nums array
            seen.insert(num);
        }

        // finally, by this point we have checked all
        // numbers and not found a duplicate, so return false
        return false;
    }
};
