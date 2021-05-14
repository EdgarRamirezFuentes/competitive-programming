/*
    Problem: Univalued Binary Tree
    Source: https://leetcode.com/problems/univalued-binary-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    bool checkUnivalued (TreeNode* root, int value) {
        if(root == NULL) return true;
        if(root->val != value) return false;
    return (checkUnivalued(root -> left, root-> val) and checkUnivalued(root -> right, root-> val));
    }
    bool isUnivalTree(TreeNode* root) {
        return checkUnivalued (root, root -> val);
    }
};