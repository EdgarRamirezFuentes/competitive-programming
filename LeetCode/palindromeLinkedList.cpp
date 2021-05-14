/*
    Problem: Palindrome Linked List
    Source: https://leetcode.com/problems/palindrome-linked-list/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        queue <int> cola;
        struct ListNode* tmp = NULL;
        if(head == NULL){
            return true;
        }
        if(head -> next == NULL){
            return true;
        }
        tmp = head;
        while(tmp != NULL){
            cola.push(tmp -> val);
            tmp = tmp -> next;
        }
        tmp = reverseList(head);
        while(tmp != NULL){
            if(tmp -> val != cola.front()){
                return false;
            }
            tmp = tmp -> next;
            cola.pop();
        }
        return true;
    }
    
    struct ListNode* reverseList(struct ListNode* head){
        struct ListNode* prev = NULL;
        struct ListNode* current = NULL;
        struct ListNode* next = NULL;
        current = head;
        while(current != NULL){
            next = current -> next;
            current -> next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    
};