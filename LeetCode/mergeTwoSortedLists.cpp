/*
    Problem: Merge Two Sorted Lists
    Source: https://leetcode.com/problems/merge-two-sorted-lists/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1 || !l2) {
            return l1 ? l1 : l2;
        }
        ListNode* newHead = nullptr;
        ListNode* aux1 = nullptr;
        ListNode* aux2 = nullptr;
        ListNode* lastNodeAdded = nullptr;
        aux1 = l1;
        aux2 = l2;
        
        if (aux1->val < aux2->val) {
            newHead = l1;
            lastNodeAdded = aux1;
            aux1 = aux1->next;
        } else {
            newHead = l2;
            lastNodeAdded = aux2;
            aux2 = aux2->next;
        }
        
        while (aux1 && aux2) {
            if (aux1->val < aux2->val) {
                lastNodeAdded->next = aux1;
                lastNodeAdded = aux1;
                aux1 = aux1->next;
            } else {
                lastNodeAdded->next = aux2;
                lastNodeAdded = aux2;
                aux2 = aux2->next;
            }
        }
        lastNodeAdded->next = aux1 ? aux1 : aux2;
        return newHead;
    }
};