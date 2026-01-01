#include <vector>

/**
 * https://leetcode.com/problems/trapping-rain-water/description/
 */
class Solution {
public:
    int trap(std::vector<int>& height) {
        // init our total area
        int totalArea{0};

        // first we will calculate the maxmimum left heights
        // for all the indices, so init our max_left_height array
        std::vector<int> maxLeftHeight(height.size());
        // our base case is that our leftmost max left height
        // is just equal to the leftmost height
        maxLeftHeight[0] = height[0];

        // loop through all height indices starting at 1
        for (int i{1}; i < height.size(); i++) {
            // set the max left height to be the 
            // previous max left height or height at
            // the index just before i
            maxLeftHeight[i] = std::max(maxLeftHeight[i-1], height[i-1]);
        }

        // next we will calculate the maxmimum right heights
        // for all the indices, so init our max_right_height array
        std::vector<int> maxRightHeight(height.size());
        // our base case is that our rightmost max right height
        // is just equal to the rightmost height
        maxRightHeight[height.size()-1] = height[height.size()-1];

        // loop through all height indices in reverse from
        // the second last last index
        for (int i{static_cast<int>(height.size()-2)}; i >= 0; i--) {
            // set the max right height to be the
            // previous max right height or height at
            // the index just after i
            maxRightHeight[i] = std::max(maxRightHeight[i+1], height[i+1]);
        }

        // now we can loop through all indices
        // from 1 to second last
        // we don't care about first or last index
        // because water cannot be trapped there
        for (int i{1}; i < height.size()-1; i++) {
            // the area at this index is equal to the
            // minimum max height we found - the current height
            // at this index
            int area{std::min(maxLeftHeight[i], maxRightHeight[i]) - height[i]};

            // the area may be negative, so we only
            // add to the total area if it's positive
            if (area > 0) {
                // add the positive area to the
                // total area
                totalArea += area;
            }
        }

        // finally, we will return the total area
        return totalArea;
    }
};
