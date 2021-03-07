// Date: Mar. 7, 2021
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find the Highest Altitude.
// Memory Usage: 7.9 MB, less than 93.78% of C++ online submissions for Find the Highest Altitude.

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currAlt = 0, maxAlt = 0;
        
        for (int i = 0; i < gain.size(); ++i) {
            currAlt += gain[i];
            maxAlt = max(currAlt, maxAlt);
        }
        
        return maxAlt;
    }
};
