/*
    Problem: Print the Elements of a Linked List
    Source: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem
    Code by: Edgar A. Ramírez Fuentes
*/

void printLinkedList(SinglyLinkedListNode* head) {
    if(head != NULL){
        while(head != NULL){
            printf("%d\n", head -> data);
            head = head -> next;
        }
    }
}


