// Date: Mar. 4, 2021
// Runtime: 4 ms, faster than 86.76% of C++ online submissions for Check Completeness of a Binary Tree.
// Memory Usage: 10.5 MB, less than 51.45% of C++ online submissions for Check Completeness of a Binary Tree.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        bool seenNull = false;
        queue<TreeNode*> q;
        
        q.push(root);
        while (!q.empty()) {
            TreeNode* curr = q.front(); q.pop();
            if (curr == nullptr) seenNull = true;
            else {
                if (seenNull) return false;
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        
        return true;
    }
};
