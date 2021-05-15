/*
    Problem: Compare two linked lists
    Source: https://www.hackerrank.com/challenges/compare-two-linked-lists/problem
    Code by: Edgar A. Ramírez Fuentes
*/

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    while( head1 != NULL || head2 != NULL ) {
        if( (head1 && !head2) || (!head1 && head2)  || (head1->data != head2 -> data) ) {
            return false;
        }
        head1 = head1-> next;
        head2 = head2-> next;
    }
    return true;
}