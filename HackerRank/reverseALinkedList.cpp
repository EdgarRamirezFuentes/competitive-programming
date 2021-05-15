/*
    Problem:Reverse a linked list
    Source: https://www.hackerrank.com/challenges/reverse-a-linked-list/problem
    Code by: Edgar A. Ramírez Fuentes
*/

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *prev = NULL;
    SinglyLinkedListNode *current = NULL;
    SinglyLinkedListNode *next = NULL;
    
    if(head == NULL)
    {
        return NULL;
    }

    current = head;
    /**
     * Reconecta los nodos mientras recorre la lista.
    */

    while(current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }

    return prev;

}