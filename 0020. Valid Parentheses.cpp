// Date: Feb. 13, 2021
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
// Memory Usage: 6.3 MB, less than 74.31% of C++ online submissions for Valid Parentheses.

class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        
        for (auto it = s.begin(); it != s.end(); it++) {
            if (*it == '(' || *it == '{' || *it == '[') {
                t.push(*it);
                continue;
            }
            
            else if (*it == ')') {
                if (t.empty()) return false;
                if (t.top() != '(') return false;
                else t.pop();
            }
            
            else if (*it == '}') {
                if (t.empty()) return false;
                if (t.top() != '{') return false;
                else t.pop();
            }
            
            else if (*it == ']') {
                if (t.empty()) return false;
                if (t.top() != '[') return false;
                else t.pop();
            }
        }
        
        return t.empty();
    }
};
