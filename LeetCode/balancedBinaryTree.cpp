/*
    Problem: Balanced Binary Tree 
    Source: https://leetcode.com/problems/balanced-binary-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    bool CheckBalance(TreeNode* root) {
        if(!root) return true;
        int leftHeight = 0;
        int rightHeight = 0;
        leftHeight = GetHeight(root -> left);
        rightHeight = GetHeight(root -> right);
        if(abs(leftHeight - rightHeight) < 2){ 
            return CheckBalance(root -> left) and CheckBalance(root->right);
        }
        return false;
    }
    
    int GetHeight(TreeNode* root) {
        int leftHeight = 0;
        int rightHeight = 0;
        if (!root) return 0;
        leftHeight = GetHeight (root -> left);
        rightHeight = GetHeight (root -> right);
        return max(leftHeight + 1, rightHeight + 1);
    }
    
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        return CheckBalance(root);
        
    }
};