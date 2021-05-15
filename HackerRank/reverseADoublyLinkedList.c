/*
    Problem: Reverse a doubly linked list
    Source: https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem
    Code by: Edgar A. Ramírez Fuentes
*/

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    struct DoublyLinkedListNode *headtmp = head;
    DoublyLinkedListNode* direcciontmp = NULL;
    while(headtmp -> next != NULL){
        headtmp = headtmp -> next;
    }
    head = headtmp;
    while(headtmp != NULL){
        direcciontmp = headtmp -> next;
        headtmp -> next = headtmp -> prev;
        headtmp -> prev = direcciontmp;
        headtmp = headtmp -> next;
    }
    return head;
}