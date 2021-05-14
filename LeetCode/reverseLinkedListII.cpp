/*
    Problem: Reverse Linked List II
    Source: https://leetcode.com/problems/reverse-linked-list-ii/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* mNode = NULL;
        ListNode* nNode = NULL;
        ListNode* prevmNode = NULL;
        ListNode* nextnNode = NULL;
        if(head == NULL){
            return NULL;
        }
        if(m==n){
            return head;
        }
        if(m==1){
            findNodes(head, &mNode, &nNode, &prevmNode, &nextnNode, m, n);
            if(nextnNode == NULL){ 
                return reverseList(mNode, m, n);
            }else{
                nNode = reverseList(mNode, m, n);
                mNode -> next = nextnNode;
                return nNode;
            }
        }
        if(m != 1){
            findNodes(head, &mNode, &nNode, &prevmNode, &nextnNode, m, n);
            if(nextnNode == NULL){
                prevmNode -> next = reverseList(mNode, m, n); 
                return head;    
            }else{
                prevmNode -> next = reverseList(mNode, m, n);
                mNode -> next = nextnNode;
                return head;
            }   
        }
        return head;
    }
    
    ListNode* reverseList(ListNode* head, int m, int n){
        ListNode* prev = NULL;
        ListNode* current = NULL;
        ListNode* next = NULL;
        current = head;
        for(int i = m; i <= n; i++){
            next = current -> next;
            current->next = prev;
            prev = current;
            current = next;
        } // Al terminar el for, el pedazo de lista estará invertido.
        return prev;
    }
    
    void findNodes(ListNode* head, ListNode** mNode, ListNode** nNode, ListNode** prevmNode, ListNode** nextnNode,int m, int n){
        ListNode* tmpNode = NULL;
        tmpNode = head;
        for(int i = 1; i <= n; i++){
                if(i == (m -1)){ // Si i se encuentra un nodo antes de m, lo guardamos para la reconexión de la lista.
                    *prevmNode = tmpNode;
                }
                if(i == m){ // Si i está en la posición m, guardamos esa dirección para tener identificado el nodo m.
                    *mNode = tmpNode; 
                }
                if(i == n){
                    *nNode = tmpNode;
                    *nextnNode = tmpNode -> next;
                }
                tmpNode = tmpNode->next;
            } // Al salir de este for, ya tenemos identificados a los nodos prevm, m y n.   
    }
};