/*
    Problem: Binary Tree Preorder Traversal
    Source: https://leetcode.com/problems/binary-tree-preorder-traversal/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    // 1 // root , root -> left and root -> right
    
// 2        3
    
    // [1, 2, 3 ]
    void preorderTraversal(vector<int>& ans, TreeNode* root) {
        if(!root) return;
        ans.push_back(root -> val);
        preorderTraversal(ans, root -> left);
        preorderTraversal(ans, root -> right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        preorderTraversal(ans, root);
        return ans;
    }
};