/*
    Problem: Find a Corresponding Node of a Binary Tree in a Clone of That Tree
    Source: https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    TreeNode* answer;    
    void findClone(TreeNode* originalNode, TreeNode* clonedNode, TreeNode* target) {
        if(!originalNode) return;
        if(originalNode == target){ 
            answer = clonedNode;  
            return;
        } 
        if(originalNode->left) findClone(originalNode->left, clonedNode->left, target);
        if(originalNode->right) findClone(originalNode->right, clonedNode->right, target);
        
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original || !target) return NULL;
        findClone(original, cloned, target);
        return answer;
    }
    
    
};