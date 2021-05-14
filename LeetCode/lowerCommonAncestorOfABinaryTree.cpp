/*
    Problem: Lowest Common Ancestor of a Binary Tree
    Source: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    
    bool isLeaf(TreeNode* root) {
        return !root->left && !root->right;
    }
    
    bool FindPath(TreeNode* root, TreeNode* target, stack<TreeNode*>& path) {
        bool found;
        if(!root) return false;
        if(root == target){
            path.push(root);
            return true;
        } 
        if(isLeaf(root)) return false;
        found = FindPath(root -> left, target, path) or FindPath(root -> right, target, path); 
        if(found) path.push(root);
        return found;
    }
    
    void CheckPath(stack<TreeNode*> path) {
        while(!path.empty()) {
            TreeNode* top = path.top();
            cout << top -> val << " ";
            path.pop();
        }
        cout << endl;
    }
    
    TreeNode* FindLCA(stack<TreeNode*>& p1, stack<TreeNode*>& p2) {
        TreeNode* LCA = nullptr;
        while(!p1.empty() && !p2.empty()) {
            if(p1.top() == p2.top()) LCA = p1.top();
            if(!p1.empty()) p1.pop();
            if(!p2.empty()) p2.pop();
        }
        return LCA;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        stack <TreeNode*> path1;
        stack <TreeNode*> path2;
        FindPath(root, p, path1);
        FindPath(root, q, path2);
        return FindLCA(path1,  path2);
    }
};