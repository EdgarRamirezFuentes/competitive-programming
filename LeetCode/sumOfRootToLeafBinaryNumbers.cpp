/*
    Problem: Sum of Root To Leaf Binary Numbers
    Source:https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int ans = 0;
    int currentBinaryNumber = 0;
    
    void solve(TreeNode* root) {
        if(!root) {
            return;
        }
        
        // Shift to the left to add the new bit
        currentBinaryNumber = currentBinaryNumber << 1;
        
        // If the current value is 1, set the first bit on.
        if (root->val == 1) {
            currentBinaryNumber |= 1;
        }
        
        // The current node is a leaf
        if(!root->left && !root->right) {
            ans += currentBinaryNumber;
        } else {
            sumRootToLeaf(root->left);
            sumRootToLeaf(root->right);
        }
         
        
        currentBinaryNumber = currentBinaryNumber >> 1;
    }
    
    int sumRootToLeaf(TreeNode* root) {
        solve(root);
       return ans;
        
    }
};