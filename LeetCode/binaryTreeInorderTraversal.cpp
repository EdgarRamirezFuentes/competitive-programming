/*
    Problem: Binary Tree Inorder Traversal
    Source: https://leetcode.com/problems/binary-tree-inorder-traversal/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public: 
    void inorderTraversal(vector<int>& ans, TreeNode* root) {
        if(!root) return;
        inorderTraversal(ans, root -> left);
        ans.push_back(root -> val);
        inorderTraversal(ans, root -> right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        inorderTraversal(ans, root);
        return ans;
    }
};