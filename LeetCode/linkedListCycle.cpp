/*
    Problem: Linked List Cycle
    Source: https://leetcode.com/problems/linked-list-cycle/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* guardian = nullptr;
        ListNode* guardian2 = nullptr;

        if(!head)  {
            return false;
        }
        guardian = head;
        guardian2 = head -> next;
        // If guardian2 is at the same position than guardian1.
        // It means that guardian2 went back to the beginning of the list 
        // through a loop.
        while(guardian && guardian2){
            if(guardian == guardian2) {
                return true;
            }
            guardian = guardian -> next;
            guardian2 = guardian2 -> next;
            // Reach the end of the list
            if(!guardian2) {
               break; 
            } else {
                // It takes one more step forward to be in front of guardian1
                guardian2 = guardian2->next;
            }
        }
        // Guardian2 got to the end of the list and there was no loop
        return false;
    }
};