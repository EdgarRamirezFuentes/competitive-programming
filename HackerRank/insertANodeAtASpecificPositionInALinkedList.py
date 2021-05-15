'''
    Problem: Insert a node at a specific position in a linked list
    Source: https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem
    Code by: Edgar A. Ramírez Fuentes
'''

def insertNodeAtPosition(head, data, position):
    aux = head;
    while aux is not None:
        if position == 0:
            new_node = SinglyLinkedListNode(aux.data)
            aux.data = data 
            new_node.next = aux.next
            aux.next = new_node
            break
        position -= 1
        aux = aux.next
    return head