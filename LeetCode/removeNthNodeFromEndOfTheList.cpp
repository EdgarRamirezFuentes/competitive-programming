/*
    Problem: Remove Nth Node From End of List
    Source: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return NULL;
        ListNode* tmp = NULL;
        vector<ListNode*> nodes;
        tmp = head;
        while(tmp) {
            nodes.push_back(tmp);
            tmp = tmp -> next;
        }
        int deletedNodeIndex = nodes.size() - n; 
        if (!deletedNodeIndex) {
            tmp = head -> next;
            delete head;
            return tmp;
        } 
        tmp = nodes[deletedNodeIndex];
        nodes[deletedNodeIndex - 1] -> next = tmp -> next;
        delete tmp;
        return head;
    }
};