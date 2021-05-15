/*
    Problem: Delete a Node
    Source: https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem
    Code by: Edgar A. Ramírez Fuentes
*/

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode *auxNode = NULL;
    SinglyLinkedListNode *deletedNode = NULL;
    if(head == NULL)
    {
        return NULL;
    }

    /**
     * El nodo a eliminar es el inicio.
    */
    if(position == 0)
    {
        deletedNode = head;
        head = head -> next;
        delete deletedNode;
        return head;
    }

    auxNode = head;

    /**
     * Posiciona al puntero una posición antes del nodo que se va a eliminar. 
    */
    for(int i = 0; i < position - 1; i++)
    {
        auxNode = auxNode -> next;
    }

    /**
     * Reconectamos los nodos anterior y siguiente (del nodo a eliminar), para no perder
     * datos. 
    */

    deletedNode = auxNode -> next;
    auxNode -> next = deletedNode -> next;
    delete deletedNode;
    return head;
}