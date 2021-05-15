/*
    Problem: Get Node Value
    Source: https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem
    Code by: Edgar A. Ramírez Fuentes
*/

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode *auxNode = NULL;
    int length = 0;
    auxNode = head;
    /**
     * Da a conocer el número de elementos que contiene la lista. 
    */
    while(auxNode != NULL)
    {
        length++;
        auxNode = auxNode -> next;
    }
    /* Queda pendiente la validación para el caso cuando la posición es negativa o es
     * mayor a el número de elementos contenidos
    */
    auxNode = head; 
    /**
     * Posiciona al auxiliar en el nodo del cual se quiere saber su valor
    */
    for(int i = 0; i < (length - positionFromTail) - 1; i++)
    {
        auxNode = auxNode -> next;
    }

    return auxNode -> data;
}