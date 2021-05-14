/*
    Problem: Maximum Depth of Binary Tree
    Source: https://leetcode.com/problems/maximum-depth-of-binary-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int CalcularAltura (TreeNode *raiz)
    {
        int alturaDerecha = 0;
        int alturaIzquierda = 0;
        if (raiz == NULL)
        {   
          return 0;
        }
        alturaIzquierda = CalcularAltura (raiz -> left);
        alturaDerecha = CalcularAltura (raiz -> right);
        if (alturaIzquierda > alturaDerecha)
        {
            return alturaIzquierda + 1;
        }
        return alturaDerecha + 1;
    }
    
    int maxDepth(TreeNode* root) {
        return CalcularAltura(root);
    }
};