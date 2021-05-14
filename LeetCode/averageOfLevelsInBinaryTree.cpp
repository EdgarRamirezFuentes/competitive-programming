/*
    Problem: Average of Levels in Binary Tree
    Source: https://leetcode.com/problems/average-of-levels-in-binary-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        // Empty tree
        if (!root) {
            return ans;
        }
        int currentLevel = 1;
        TreeNode* currentNode = nullptr;
        queue<TreeNode*> nodes;
        queue<int> levels;
        nodes.push(root);
        levels.push(currentLevel);
        double totalSum = 0;
        int totalNodes = 0;
        
        while (!nodes.empty()) {
            currentLevel = levels.front();
            totalSum = 0;
            totalNodes = 0;
            
            while (!levels.empty() && levels.front() == currentLevel) {
                currentNode = nodes.front();
                totalSum += currentNode->val;
                totalNodes++;
                nodes.pop();
                levels.pop();
                if (currentNode->left) {
                    nodes.push(currentNode->left);
                    levels.push(currentLevel + 1);
                }
                
                if (currentNode->right) {
                    nodes.push(currentNode->right);
                    levels.push(currentLevel + 1);
                }
            }
            ans.push_back(totalSum / totalNodes);
        }
        return ans;
    }
};