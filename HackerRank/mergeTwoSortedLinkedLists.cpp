/*
    Problem: Merge two sorted linked lists
    Source: https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem
    Code by: Edgar A. Ramírez Fuentes
*/

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *newList = NULL;
    SinglyLinkedListNode *auxNode = NULL;

    if(head1 == NULL && head2 == NULL)
    {
        return NULL;
    }
    if(head1 == NULL)
    {
        return head2;
    }
    if(head2 == NULL)
    {
        return head1;
    }
    /** 
     * Compara el primer valor de ambas listas y el menor será el inicio de la nueva          * lista
    */
    if(head1 -> data < head2 -> data)
    {
        newList = head1;
        head1 = head1 -> next;
    }else{
        newList = head2;
        head2 = head2 -> next;
    }
    auxNode = newList;
    /**
     * Acomoda los números por orden hasta que una lista llegue a su fin
    */
    while(head1 != NULL && head2 != NULL)
    {
        if(head1 -> data <= head2 -> data)
        {
            auxNode -> next = head1;
            auxNode = head1;
            head1 = head1 -> next;
        }else{
            auxNode -> next = head2;
            auxNode = head2;
            head2 = head2 -> next;
        }
    }
    /**
     * Dependiendo de la lista que se terminó se reconecta con la nueva lista
    */
    if(head1 == NULL)
    {
        auxNode -> next = head2;
    }else{
        auxNode -> next = head1;
    }
    return newList;
}