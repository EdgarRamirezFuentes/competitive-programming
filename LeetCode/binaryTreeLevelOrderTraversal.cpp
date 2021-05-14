/*
    Problem: Binary Tree Level Order Traversal
    Source: https://leetcode.com/problems/binary-tree-level-order-traversal/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        int level = 1;
        vector<vector<int>> ans;
        // Empty tree
        if (!root) {
            return ans;
        }
        
        TreeNode* currentNode = nullptr;
        int currentLevel = 1;
        queue<TreeNode*> nodes;
        queue<int> levels;
        nodes.push(root);
        levels.push(level);
        while (!nodes.empty()) {
            currentNode = nodes.front();
            currentLevel = levels.front();
            nodes.pop();
            levels.pop();
            
            if (ans.size() >= currentLevel) {
                ans[currentLevel - 1].push_back(currentNode->val);
            }else {
                ans.push_back(vector<int>());
                ans[currentLevel - 1].push_back(currentNode->val);
            }
            if (currentNode->left) {
                nodes.push(currentNode->left);
                levels.push(currentLevel + 1);
            }
            
            if (currentNode->right) {
                nodes.push(currentNode->right);
                levels.push(currentLevel + 1);
            }
        }
        return ans;
    }
};