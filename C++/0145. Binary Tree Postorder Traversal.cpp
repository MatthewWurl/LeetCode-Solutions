// Date: Mar. 4, 2021
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Postorder Traversal.
// Memory Usage: 8.4 MB, less than 87.48% of C++ online submissions for Binary Tree Postorder Traversal.

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
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) return {};
        
        vector<int> ans;
        stack<TreeNode*> s;
        s.push(root);
        
        while (!s.empty()) {
            TreeNode* curr = s.top(); s.pop();
            ans.insert(ans.begin(), curr->val);
            if (curr->left != nullptr)
                s.push(curr->left);
            if (curr->right != nullptr)
                s.push(curr->right);
        }
        
        return ans;
    }
};
