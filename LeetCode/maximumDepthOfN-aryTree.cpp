/*
    Problem: Maximum Depth of N-ary Tree
    Source: https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int maxD;
    void solve(Node* root, int currentDepth) {
        // The current node is a leaf
        if (root->children.size() == 0) {
            maxD = max(currentDepth, maxD);
        } else {
            for (auto child : root -> children) {
                solve(child, currentDepth + 1);
            }
        }
        
    }
    int maxDepth(Node* root) {
        if (!root) return 0;
        solve(root, 1);
        return maxD;
    }
};