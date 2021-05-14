/*
    Problem: Validate Binary Search Tree
    Source: https://leetcode.com/problems/validate-binary-search-tree/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    bool validateBST(TreeNode* root, long minimumValue, long maximumValue) {
        if(!root) return true; // Arriba de este subtree todo está correcto.
        // Si no cumple con los límites, significa que no es BST.
        if(root -> val >= maximumValue || root -> val <= minimumValue) return false;
        // En el nodo izquierdo nuestro nuevo max será el valor del nodo actual.
        // En el nodo derecho nuestro nuevo mínimo será el valor del nodo actual.
        return validateBST(root-> left, minimumValue, root->val) && validateBST(root -> right, root -> val, maximumValue);
    }
    bool isValidBST(TreeNode* root) {
        // El miínimo y el máximo son long debido a que si un nodo tiene el valor del
        // máximo valor que puede tomar int va a tirar false debido a la condicional
        // que valida si el valor del nodo actual satisface ser mayor o menor que el subtree
        // de arriba.
        return validateBST(root, numeric_limits<long>::min(),numeric_limits<long>::max());  
        
    }
};