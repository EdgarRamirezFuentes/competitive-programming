/*
    Problem: Range Sum of BST
    Source: https://leetcode.com/problems/range-sum-of-bst/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        queue<TreeNode*> q;
        int ans = 0;
        if (!root) return ans;
        q.push(root);
        while (!q.empty()) {
            TreeNode* currentNode = q.front();
            int currentValue = currentNode -> val;
            if (currentNode -> val >= low && currentNode -> val <= high ) {
                ans += currentValue;
            }
            if (currentNode -> left) {
                q.push(currentNode -> left);
            }
            if (currentNode -> right) {
                q.push(currentNode -> right);
            }
            q.pop();
        }
        return ans;
    }
};