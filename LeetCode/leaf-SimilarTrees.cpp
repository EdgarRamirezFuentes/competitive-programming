/*
    Problem: Leaf-Similar Trees
    Source: https://leetcode.com/problems/leaf-similar-trees/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    void findLeaves(TreeNode* currentNode, vector<int>& leaves) {
        // The current node is a leaf
        if (!currentNode->left && !currentNode->right) { 
            leaves.push_back(currentNode->val);
            return;
        }
        if (currentNode->left) {
            findLeaves(currentNode->left, leaves);
        }
        if (currentNode->right) {
            findLeaves(currentNode->right, leaves);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1;
        vector<int> leaves2;
        findLeaves(root1, leaves1);
        findLeaves(root2, leaves2);
        if (leaves1.size() != leaves2.size()) {
            return false;
        }
        for (int i = 0; i < leaves1.size(); i++) {
            if (leaves1[i] != leaves2[i]) {
                return false;
            }
        }
        return true;
    }
};