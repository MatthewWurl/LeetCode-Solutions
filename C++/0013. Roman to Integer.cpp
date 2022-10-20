// Runtime: 15 ms, faster than 71.00% of C++ online submissions for Roman to Integer.
// Memory Usage: 8.3 MB, less than 24.80% of C++ online submissions for Roman to Integer.

class Solution {
public:
    map<char, int> mp = {
        {'M', 1000},
        {'D', 500},
        {'C', 100},
        {'L', 50},
        {'X', 10},
        {'V', 5},
        {'I', 1}
    };
    int romanToInt(string s) {
        int ans = mp[s[s.size() - 1]];
        
        for (int i = s.size() - 2; i >= 0; --i) {
            char curr = s[i], next = s[i + 1];
            
            if (mp[curr] < mp[next]) ans -= mp[curr];
            else ans += mp[curr];
        }
        
        return ans;
    }
};