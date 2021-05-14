/*
    Problem: Same Tree
    Source: https://leetcode.com/problems/same-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if( not p or not q) return p == q;
        if(p-> val != q -> val) return false;
        return isSameTree(p-> left, q-> left) && isSameTree(p-> right, q-> right);
    }
};