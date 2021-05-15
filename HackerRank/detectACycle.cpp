/*
    Problem: Linked Lists: Detect a Cycle
    Source: https://www.hackerrank.com/challenges/ctci-linked-list-cycle/problem
    Code by: Edgar A. Ramírez Fuentes
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    struct Node *guardian = NULL;
    struct Node *guardian2 = NULL;
    if(!head) return 0;
    guardian = head;
    guardian2 = head -> next;
    while(guardian && guardian2){
        if(guardian == guardian2) return 1;
        guardian = guardian -> next;
        guardian2 = guardian2 -> next;
        if(!guardian2) {
            break; 
        } else {
            guardian2 = guardian2->next;
        }
    }
    return 0;
}