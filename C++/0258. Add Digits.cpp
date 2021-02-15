// Date: Feb. 15, 2021
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Add Digits.
// Memory Usage: 5.9 MB, less than 54.12% of C++ online submissions for Add Digits.

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        else return (num % 9 == 0) ? 9 : num % 9;
    }
};
