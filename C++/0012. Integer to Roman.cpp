// Runtime: 8 ms, faster than 82.01% of C++ online submissions for Integer to Roman.
// Memory Usage: 6 MB, less than 47.60% of C++ online submissions for Integer to Roman.

class Solution {
public:
    const int N[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const string R[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string intToRoman(int num) {
        string ans = "";
        
        for (int i = 0; num != 0; ++i) {
            while (num >= N[i]) {
                ans += R[i];
                num -= N[i];
            }
        }
        
        return ans;
    }
};