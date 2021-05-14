/*
    Problem: Symmetric Tree
    Source: https://leetcode.com/problems/symmetric-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    bool sameNode(TreeNode* n1, TreeNode* n2) {
        if ( (!n1 && !n2) || (n1 && n2 && n1 -> val == n2 -> val)) {
            return true;
        }
        return false;
    }
    
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        TreeNode* n1 = nullptr;
        TreeNode* n2 = nullptr;
        queue<TreeNode*> q;
        if (!sameNode(root->left, root->right)) return false;
        // Don't add null nodes
        if (root->left) {
            q.push(root->left);
            q.push(root->right);
        }
        while (!q.empty()) {
            n1 = q.front();
            q.pop();
            n2 = q.front();
            q.pop();
            
            if(!sameNode(n1->left, n2->right)) {
                return false;
            } else {
                // The nodes to be compared are not nullptr
                if (n1->left) {
                    q.push(n1->left);
                    q.push(n2->right);
                }
            }
            
            if(!sameNode(n1->right, n2->left)) {
                return false;
            } else {
                // The nodes to be compared are not nullptr
                if (n1->right) {
                    q.push(n1->right);
                    q.push(n2->left);
                }
            }
        }
        return true;       
    }
};