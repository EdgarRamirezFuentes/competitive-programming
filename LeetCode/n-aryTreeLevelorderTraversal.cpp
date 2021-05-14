/*
    Problem: N-ary Tree Level Order Traversal
    Source: https://leetcode.com/problems/n-ary-tree-level-order-traversal/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    void DFSTraversal(map<int,vector<int>>& levelMap, int level, Node* root) {
        if(!root) return;
        levelMap[level].push_back(root -> val);
        for(auto child : root -> children) {
            level++;
            DFSTraversal(levelMap, level, child);
            level--;
        }
    }
    
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        map<int,vector<int>> levelMap;
        DFSTraversal(levelMap, 0, root);
        for(auto i = levelMap.begin(); i != levelMap.end(); i++) {
            ans.push_back(i -> second);
        }
        return ans;
    }
};