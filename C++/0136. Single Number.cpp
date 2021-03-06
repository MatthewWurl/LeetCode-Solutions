// Date: Mar. 6, 2021
// Runtime: 12 ms, faster than 98.77% of C++ online submissions for Single Number.
// Memory Usage: 16.8 MB, less than 89.31% of C++ online submissions for Single Number.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        
        for(const int& num : nums)
            ans ^= num;
        
        return ans;
    }
};
