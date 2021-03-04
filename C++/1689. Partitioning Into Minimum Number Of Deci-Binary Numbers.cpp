// Date: Mar. 4, 2021
// Runtime: 32 ms, faster than 90.91% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.
// Memory Usage: 13.5 MB, less than 89.22% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.

class Solution {
public:
    int minPartitions(string n) {
        int max = -1;
        
        for (const char& c : n) {
            if (c == '9') return 9;
            if (c - '0' > max) max = c - '0';
        }
        
        return max;
    }
};
