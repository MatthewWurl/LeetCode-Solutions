// Date: Mar. 4, 2021
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Same Tree.
// Memory Usage: 9.9 MB, less than 95.14% of C++ online submissions for Same Tree.

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p || !q) return p == q;
        if (p->val != q->val) return false;
        
        return isSameTree(p->right, q->right) && isSameTree(p->left, q->left);
    }
};
