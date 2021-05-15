/*
    Problem: Inserting a Node Into a Sorted Doubly Linked List
    Source: https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem
    Code by: Edgar A. Ramírez Fuentes
*/

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode *newNode= NULL;
    DoublyLinkedListNode *previousNode = NULL;
    DoublyLinkedListNode *currentNode = NULL;
    newNode = new DoublyLinkedListNode(data);
    if(newNode != NULL)
    {
        if(head == NULL)
        {
            return newNode; /* Retorna el único nodo en la lista */
        }
        currentNode = head;
        while(currentNode != NULL)
        {
            if(currentNode -> data > newNode -> data)
            {
                if(previousNode == NULL)
                {
                    newNode -> next = head;
                    head -> prev = newNode;
                    return newNode; /* El nuevo nodo es la nueva cabeza de la lista */
                }
                newNode -> next = currentNode;
                currentNode -> prev = newNode;
                newNode -> prev = previousNode;
                previousNode -> next = newNode;/* Reconecta la lista con el nuevo nodo */
                return head;
            }
            /**
             * Hacen que se recorra la lista 
            */
            previousNode = currentNode;
            currentNode = currentNode -> next; 
        }
        /**
         * Si al terminar de recorrer la lista, el número que se quiere agregar en la 
         * lista es mayor que el último nodo de la lista, eso significa que no se 
         * colocó en la lista y por lo tanto será el último nodo por ser el número más
         * grande.
        */
        previousNode -> next = newNode;
        newNode -> prev = previousNode;
    }
    return head;
}