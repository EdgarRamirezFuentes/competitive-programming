/*
    Problem: Add Two Numbers
    Source: https://leetcode.com/problems/add-two-numbers/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    int getSize(ListNode* list) {
        int q = 0;
        while(list != NULL) {
            q++;
            list = list -> next;
        }
        return q;
    }
    
    ListNode* addLists (ListNode* l1, ListNode* l2) {
        ListNode* tmp = l1;
        short carry = 0;
        while(l2 != NULL) {
            tmp -> val += (l2 -> val) + carry;
            if (tmp -> val > 9) {
                carry = tmp -> val / 10;
                tmp -> val %= 10;
            }else{
                carry = 0;
            }
            l2 = l2 -> next;
            if(l2 != NULL && tmp -> next != NULL) tmp = tmp -> next;
        }
        
        while(tmp != NULL && carry != 0){
            if(tmp -> next == NULL) {
                tmp -> next = new ListNode(carry);
                break;
            }
            tmp = tmp -> next;
            tmp -> val += carry;
            if (tmp -> val > 9) {
                carry = tmp -> val / 10;
                tmp -> val %= 10;
            }else{
                carry = 0;
            }
           
        }
        return l1;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newList = nullptr;
        int size1 = getSize(l1);
        int size2 = getSize(l2);
        if(size1 >= size2) {
            return addLists(l1,l2);
        }else{
            return addLists(l2,l1);
        }
        return NULL;
        
    }   
};