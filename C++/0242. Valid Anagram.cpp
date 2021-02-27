// Date: Feb. 27, 2021
// Runtime: 8 ms, faster than 83.29% of C++ online submissions for Valid Anagram.
// Memory Usage: 7.2 MB, less than 69.51% of C++ online submissions for Valid Anagram.

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        vector<int> chars(26, 0);
        
        for (int i = 0; i < s.size(); ++i) {
            chars[s[i] - 'a']++;
            chars[t[i] - 'a']--;
        }
        
        for (int n : chars) {
            if (n != 0) return false;
        }
        
        return true;
    }
};
