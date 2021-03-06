// Date: Mar. 6, 2021
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Palindrome Number.
// Memory Usage: 5.9 MB, less than 82.80% of C++ online submissions for Palindrome Number.

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        long rev = 0;
        int num = x;
        
        while (num != 0) {
            rev = (rev * 10) + (num % 10);
            num /= 10;
        }
        
        return x == rev;
    }
};
