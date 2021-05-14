/*
    Problem: N-ary Tree Preorder Traversal
    Source: https://leetcode.com/problems/n-ary-tree-preorder-traversal/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    // ans = [1, 3, 5]
    void preorderTraversal(vector<int>& ans, Node* root) {
        if(!root) return;
        ans.push_back(root -> val);
        for(auto child : root -> children) {
            preorderTraversal(ans, child);
        }
    }
    
    vector<int> preorder(Node* root) {
        // Space complexity and Time complexity  = O(n)
        vector<int> ans;
        if(!root) return ans;
        preorderTraversal(ans, root);
        return ans;
    }
};