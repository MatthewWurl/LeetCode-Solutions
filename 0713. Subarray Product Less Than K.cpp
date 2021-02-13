// Date: Feb. 13, 2021
// Runtime: 104 ms, faster than 88.39% of C++ online submissions for Subarray Product Less Than K.
// Memory Usage: 91.8 MB, less than 79.78% of C++ online submissions for Subarray Product Less Than K.

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        
        int p = 1;
        int res = 0, l = 0, r = 0;
        
        while (r < nums.size()) {
            p *= nums[r];
            
            while (p >= k) {
                p /= nums[l];
                l++;
            }
            
            res += r - l + 1;
            r++;
        }
        
        return res;
    }
};
