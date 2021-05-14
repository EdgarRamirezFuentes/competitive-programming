/*
    Problem: Search in a Binary Search Tree
    Source: https://leetcode.com/problems/search-in-a-binary-search-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* current_node = root;
        TreeNode*  ans = nullptr;
        while(current_node) {
            if (current_node->val == val) {
                ans = current_node;
                break;
            }
            if (val < current_node->val) {
                current_node = current_node->left;
            } else {
                current_node = current_node->right;
            }
        }
        return ans;
        
    }
};