// Date: Mar. 5, 2021
// Runtime: 4 ms, faster than 80.04% of C++ online submissions for Binary Tree Level Order Traversal.
// Memory Usage: 12.5 MB, less than 75.14% of C++ online submissions for Binary Tree Level Order Traversal.

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};
        
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int size = q.size();
            vector<int> lvl(size, 0);
            
            for (int i = 0; i < size; ++i) {
                TreeNode* curr = q.front(); q.pop();
                lvl[i] = curr->val;
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            
            ans.push_back(lvl);
        }
        
        return ans;
    }
};
