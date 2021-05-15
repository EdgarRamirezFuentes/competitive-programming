/*
    Problem: Print in Reverse
    Source: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem
    Code by: Edgar A. Ramírez Fuentes
*/

void reversePrint(SinglyLinkedListNode* head) {

    if(head == NULL)
    {
        return;
    }
    reversePrint(head -> next);
    cout << head -> data << "\n";
}