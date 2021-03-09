// Date: Mar. 8, 2021
// Runtime: 4 ms, faster than 89.92% of C++ online submissions for Check If Two String Arrays are Equivalent.
// Memory Usage: 11.5 MB, less than 88.74% of C++ online submissions for Check If Two String Arrays are Equivalent.

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1, w2;
        
        for (const string& s : word1)
            w1 += s;
        
        for (const string& s : word2)
            w2 += s;
            
        return w1 == w2;
    }
};
