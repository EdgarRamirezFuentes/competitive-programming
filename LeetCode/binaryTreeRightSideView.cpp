/*
    Problem: Binary Tree Right Side View
    Source: https://leetcode.com/problems/binary-tree-right-side-view/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;
        TreeNode* currentNode = nullptr;
        int currentLevel = 0;
        queue<TreeNode*> node;
        queue<int> level;
        node.push(root);
        level.push(currentLevel);
        while (!node.empty()) {
            currentNode = node.front();
            currentLevel = level.front();
            node.pop();
            level.pop();
            if (currentNode -> left) {
                node.push(currentNode -> left);
                level.push(currentLevel + 1);
            }
            
            if (currentNode -> right) {
                node.push(currentNode -> right);
                level.push(currentLevel + 1);
            }
                          
            if ((!level.empty() && currentLevel != level.front()) || level.empty()) {
                ans.push_back(currentNode -> val);
            }
        }
        return ans; 
    }
};