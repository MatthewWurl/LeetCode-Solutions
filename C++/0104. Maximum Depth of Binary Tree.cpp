// Date: Mar. 4, 2021
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum Depth of Binary Tree.
// Memory Usage: 19 MB, less than 54.62% of C++ online submissions for Maximum Depth of Binary Tree.

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
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
