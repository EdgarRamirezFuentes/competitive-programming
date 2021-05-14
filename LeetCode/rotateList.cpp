/*
    Problem: Rotate List
    Source: https://leetcode.com/problems/rotate-list/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int size = 0;
        vector<ListNode*> nodes;
        vector<int> oldValues;
        ListNode* aux = head;
        while (aux) {
            size++;
            nodes.push_back(aux);
            oldValues.push_back(aux->val);
            aux = aux->next;
        }
        int newPosition;
        int newPositionValue;
        int currentNodeValue;
        for (int i = 0; i < size; i++) {
            newPosition = (k + i) % size;
            nodes[newPosition]->val = oldValues[i];
        }
        return head;
    }
    
};