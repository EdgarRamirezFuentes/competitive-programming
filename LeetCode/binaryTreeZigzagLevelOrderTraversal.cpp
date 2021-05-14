/*
    Problem: Binary Tree Zigzag Level Order Traversal
    Source: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        // Empty tree
        if (!root) {
            return ans;
        }
        int currentLevel = 1;
        queue<TreeNode*> nodes;
        queue<int> levels;
        vector<TreeNode*> levelNodes;
        nodes.push(root);
        levels.push(currentLevel);
        
        while (!nodes.empty()) {
            currentLevel = levels.front();
            levelNodes.clear();
            
            // There is no space for the nodes of the current level in our array answer
            if (ans.size() < currentLevel) {
                ans.push_back(vector<int>());
            }
            
            // Create an aray of the nodes of the current level
            while (!levels.empty() && levels.front() == currentLevel) {
                levelNodes.push_back(nodes.front());
                nodes.pop();
                levels.pop();
            }
            
            // If the current level is odd, store the nodes from right to left
            if (currentLevel % 2) {
                // Nodes from left to right
                for (auto currentNode : levelNodes) {
                    ans[currentLevel - 1].push_back(currentNode->val);
                }
            } else { // If our current level is even, store the nodes from right to left
                for (int i = levelNodes.size() - 1; i > -1; i--) {
                    ans[currentLevel - 1].push_back(levelNodes[i]->val);
                }
            }
            
            // Push to our queue the nodes of the next level from left to right
            for (auto currentNode : levelNodes) {
                if (currentNode->left) {
                    nodes.push(currentNode->left);
                    levels.push(currentLevel + 1);
                }
                if (currentNode->right) {
                    nodes.push(currentNode->right);
                    levels.push(currentLevel + 1);
                }
            }
        }
        return ans;
    }
};