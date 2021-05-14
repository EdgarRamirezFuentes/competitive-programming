/*
    Problem: Cousins in Binary Tree
    Source: https://leetcode.com/problems/cousins-in-binary-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
    int x_depth = -1;
    int y_depth = -2;
    TreeNode* x_parent = nullptr;
    TreeNode* y_parent = nullptr;
public:
    void helper(TreeNode* parent, TreeNode* root, int x, int y, int depth) {
        if(!root) return;
        if(root -> val == x) x_depth = depth, x_parent = parent;
        if(root -> val == y) y_depth = depth, y_parent = parent;
        helper(root, root -> left, x, y, depth + 1);
        helper(root, root -> right, x, y, depth + 1);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root) return false;
        helper(root, root -> left, x, y,1);
        helper(root, root -> right, x, y,1);
        return x_depth == y_depth and x_parent != y_parent;
    }
};