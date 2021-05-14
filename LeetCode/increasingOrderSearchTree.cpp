/*
    Problem: Increasing Order Search Tree
    Source: https://leetcode.com/problems/increasing-order-search-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        // Empty Tree
        if (!root) {
            return nullptr;
        }
        // DFS stack
        stack<TreeNode*> s;
        TreeNode* currentNode = nullptr;
        TreeNode* newHead = nullptr;
        // Last node added to the new tree
        TreeNode* lastNode = nullptr;
        s.push(root);
        // There are nodes to link
        while(!s.empty()) {
            currentNode = s.top();
            if (currentNode->left) {
                s.push(currentNode->left);
                continue;
            }
            
            if (!newHead) {
                newHead = currentNode;    
            } else {
                lastNode->right = currentNode;
            }
            lastNode = currentNode;
            s.pop();
            if (!s.empty()) {
                s.top()->left = nullptr;
            }
            if (currentNode->right) {
                s.push(currentNode->right);
            }
        } 
        return newHead;
        
    }
};