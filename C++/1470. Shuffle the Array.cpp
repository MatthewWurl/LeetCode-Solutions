// Date: Feb. 13, 2021
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Shuffle the Array.
// Memory Usage: 9.6 MB, less than 89.37% of C++ online submissions for Shuffle the Array.

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffled(2 * n, 0);
        
        for (int i = 0; i < 2 * n; i++) {
            if (i % 2 == 0)
                shuffled[i] = nums[i / 2];
            else
                shuffled[i] = nums[n + (i / 2)];
        }
        
        return shuffled;
    }
};
