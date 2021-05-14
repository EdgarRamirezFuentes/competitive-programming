/*
    Problem: Invert Binary Tree
    Source: https://leetcode.com/problems/invert-binary-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:

    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};