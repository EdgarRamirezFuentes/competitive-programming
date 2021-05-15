/*
    Problem: Binary Search Tree : Lowest Common Ancestor
    Source: https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem
    Code by: Edgar A. Ramírez Fuentes
*/

void findPath(Node* root, int value, queue<Node*>& path) {
    if(!root) return;
    if(root -> data == value) {
        path.push(root);
        return;
    }
    if(root -> data > value){
        path.push(root);
        findPath(root->left,value,path);
        return;
    }
    path.push(root);
    findPath(root->right,value,path);
}

Node* findLCA(Node* lca, queue<Node*>& path1, queue<Node*>& path2) {
    while(!path1.empty() && !path2.empty()) {
        if(path1.front() == path2.front()) {
            lca = path1.front();
            path1.pop();
            path2.pop();
        }else{
            return lca;
        }
    }
    return lca;
}

Node *lca(Node *root, int v1,int v2) {
    queue<Node*> path1;
    queue<Node*> path2;
    Node* lca = nullptr;
    lca = root;
    findPath(root,v1, path1);
    findPath(root,v2, path2);
    return findLCA(lca,path1,path2);
}