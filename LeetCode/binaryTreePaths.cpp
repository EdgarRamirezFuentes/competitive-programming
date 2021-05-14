/*
    Problem: Binary Tree Paths
    Source: https://leetcode.com/problems/binary-tree-paths/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
    vector<string> paths;
public:
    bool isLeaf(TreeNode* root) {
        return !root -> left && !root -> right;
    }
    
    void findPath(TreeNode* root, string path) {
        if(!root) return;
        path += to_string(root -> val);
        if(!isLeaf(root)) path += "->";
        if(isLeaf(root)) {
            paths.push_back(path); 
            return;
        }
        findPath(root -> left, path);
        findPath(root -> right, path); 
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        string path;
        findPath(root, path);
        return paths;
        
    }
};