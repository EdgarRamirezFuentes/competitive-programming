/*
    Problem: Remove Duplicates from Sorted List II
    Source: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* newHead = nullptr;
        // Last node added in the new list
        ListNode* lastNode = nullptr;
        ListNode* currentNode = nullptr;
        ListNode* nextNode = nullptr;
        int currentValue = 0;    
        currentNode = head; 
        
        while (currentNode) {
            nextNode = currentNode -> next;
            currentValue = currentNode -> val;
            // No repeated number
            if (!nextNode || currentValue != nextNode -> val) {
                if (!newHead) {
                    newHead = currentNode;
                } else {
                    lastNode -> next = currentNode;
                }
                lastNode = currentNode;
                currentNode = nextNode;
            } else {
                while (currentNode && currentValue == currentNode -> val) {
                    nextNode = currentNode -> next;
                    delete currentNode;
                    currentNode = nextNode ? nextNode : nullptr;
                }
             }   
        }
        if (lastNode) {
            lastNode->next = nullptr; 
        } 
        
        return newHead;
    }
};