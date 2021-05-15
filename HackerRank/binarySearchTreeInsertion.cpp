/*
    Problem: Binary Search Tree : Insertion
    Source: https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem
    Code by: Edgar A. Ramírez Fuentes
*/

Node * insert(Node * root, int data) {
    if(root == NULL){
        Node *newNode = new Node(data);
        return newNode;
    }
    if(data >= root -> data)
    {
        root -> right = insert(root -> right, data);
    }else{
        root -> left = insert(root -> left, data);
    }
    return root;
}