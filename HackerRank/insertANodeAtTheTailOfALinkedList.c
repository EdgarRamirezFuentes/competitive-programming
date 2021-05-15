/*
    Problem: Insert a Node at the Tail of a Linked List
    Source: https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem
    Code by: Edgar A. Ramírez Fuentes
*/

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    struct SinglyLinkedListNode *tmp = head;
    if(head == NULL){
        struct SinglyLinkedListNode *newNode;
        newNode = (struct SinglyLinkedListNode*) malloc(1 * sizeof(struct SinglyLinkedListNode));
        if(newNode != NULL){
            newNode -> data = data;
            newNode -> next = NULL;
            return newNode;
        }
    }else{
        while(tmp -> next != NULL){
            tmp = tmp -> next;
        }
        struct SinglyLinkedListNode *newNode;
        newNode = (struct SinglyLinkedListNode*) malloc(1 * sizeof(struct SinglyLinkedListNode));
        if(newNode != NULL){
            newNode -> data = data;
            newNode -> next = NULL;
            tmp -> next = newNode;
        }
    }
    return head;
}

