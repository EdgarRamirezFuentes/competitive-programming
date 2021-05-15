/*
    Problem: Delete duplicate-value nodes from a sorted linked list
    Source: https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem
    Code by: Edgar A. Ramírez Fuentes
*/

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    if(head == NULL) {
        return NULL;
    }
    unordered_map <int,int> repetidos;
    struct SinglyLinkedListNode* tmp = NULL;
    struct SinglyLinkedListNode* prev = NULL;
    tmp = head;
    while(tmp != NULL) {
        repetidos[tmp->data]++;
        if(repetidos[tmp -> data] > 1) {
            prev -> next = tmp -> next;
            free(tmp); 
            tmp = prev -> next;
            continue;
        }
        prev = tmp;
        tmp = tmp -> next;
        
    }
    return head;
}