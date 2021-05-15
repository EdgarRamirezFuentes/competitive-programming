/*
    Problem: Insert a node at the head of a linked list
    Source: https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem
    Code by: Edgar A. Ramírez Fuentes
*/

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* list, int data) {
    struct SinglyLinkedListNode *tmp = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    if(tmp != NULL){
        if(list == NULL){
            tmp -> data = data;
            return tmp;
        }
        tmp ->data = data;
        tmp -> next = list;
        return tmp;
    }
    return list;
}
