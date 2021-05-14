/*
    Problem: N-ary Tree Postorder Traversal
    Source: https://leetcode.com/problems/n-ary-tree-postorder-traversal/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    void postOrderTraversal(vector<int>& ans, Node* root) {
        if(!root) return;
        for(auto child : root -> children) {
            postOrderTraversal(ans,child);
        }
        ans.push_back(root -> val);
    }
    
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(!root) return ans;
        postOrderTraversal(ans, root);
        return ans;
    }
};