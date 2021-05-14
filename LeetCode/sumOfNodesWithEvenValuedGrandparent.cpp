/*
    Problem: Sum of Nodes with Even-Valued Grandparent
    Source: https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    
    void sumNodes(TreeNode* grandParent, TreeNode* parent, TreeNode* currentNode, int& sum) {
        if(!currentNode) return;
        if(grandParent && grandParent -> val % 2 == 0) {
            sum += currentNode -> val;
        }
        sumNodes(parent, currentNode, currentNode -> left,sum);
        sumNodes(parent, currentNode, currentNode -> right,sum);
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        sumNodes(NULL, NULL, root, sum);
        return sum;
    }
};