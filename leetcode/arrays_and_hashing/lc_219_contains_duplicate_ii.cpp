#include <unordered_map>
#include <vector>
#include <cmath>

/**
 * https://leetcode.com/problems/contains-duplicate-ii/description/
 */
class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        // handle the edge case where k = 0
        // in this case it is impossible to find
        // abs(i-j) <= k
        if (k == 0) {
            // so directly return false
            return false;
        }

        // we will map numbers to their indcies
        // as wel iterate through the nums vector
        std::unordered_map<int, int> seen{};

        // loop through all values in the nums array
        for (int i = 0; const auto& num: nums) {
            // attempt to find the num in our map
            const auto it = seen.find(num);
            
            // check if we have actually found it
            if (it != seen.end()) {
                // if we did, get the index of the 
                // duplicate number
                auto j = it->second;
                
                // then check if abs(i-j) <= k
                if (std::abs(i - j) <= k) {
                    // if it does, return true
                    return true;
                }
            }
            
            // otherwise, update our number in our map
            // even overwriting it if there are multiple duplicates
            seen[num] = i;

            // make sure to increment the index variable i
            ++i;
        }

        // by this point we have checked all nums
        // and not found a duplicate where
        // abs(i-j) <= k, so return false
        return false;
    }
};
