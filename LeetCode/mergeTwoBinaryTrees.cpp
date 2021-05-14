/*
    Problem: Merge Two Binary Trees
    Source: https://leetcode.com/problems/merge-two-binary-trees/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        // Both are empty trees
        if (!root1 && !root2) return nullptr;
        // Either root1 or root2 is empty
        if (!root1 || !root2) {
            return root1 ? root1 : root2;
        }
        
        // BFS queue
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;
        q1.push(root1);
        q2.push(root2);
        
        TreeNode* n1 = nullptr;
        TreeNode* n2 = nullptr;
        
        while (!q1.empty()) {
            n1 = q1.front();
            n2 = q2.front();
            q1.pop();
            q2.pop();
            n1->val += n2->val;
            if(n1->left && n2->left) {
                q1.push(n1->left);
                q2.push(n2->left);
            } else if (!n1->left && n2->left) {
                n1->left = n2->left;
            }
            
            if(n1->right && n2->right) {
                q1.push(n1->right);
                q2.push(n2->right);
            } else if (!n1->right && n2->right) {
                n1->right = n2->right;
            }
            
        }
        return root1;
        
    }
        
};