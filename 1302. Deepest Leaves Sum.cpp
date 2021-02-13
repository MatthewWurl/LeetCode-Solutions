// Date: Feb. 13, 2021
// Runtime: 40 ms, faster than 83.81% of C++ online submissions for Deepest Leaves Sum.
// Memory Usage: 38.8 MB, less than 47.58% of C++ online submissions for Deepest Leaves Sum.

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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        int depthSum;
        
        q.push(root);
        
        while (!q.empty()) {
            depthSum = 0;
            
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* curr = q.front(); q.pop();
                depthSum += curr->val;
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
        }
        
        return depthSum;
    }
};
