/*
    Problem: Remove Duplicates from Sorted List
    Source: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;
        ListNode* nextNode = head -> next;
        ListNode* currentNode = head;
        while (nextNode) {
            if (currentNode->val == nextNode->val) {
                ListNode* aux = nextNode;
                currentNode->next = nextNode->next;    
                delete aux;
            } else {
                currentNode = nextNode;
            }
            nextNode = currentNode->next;
        }
        return head;
    }
};