/*
    Problem: Split Linked List in Parts
    Source: https://leetcode.com/problems/split-linked-list-in-parts/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
       vector<ListNode*> ans(k);
        int size = 0;
        ListNode* aux = root;
        while (aux) {
            size++;
            aux = aux->next;
        }
        int splitSize = size / k;
        int remainder = size % k;
        cout << splitSize << " " << remainder << endl;
        for(int i = 0; i < k; i++) {
            // There are no more nodes
            if (!root) {
                cout << "null" << endl;
                ans[i] = nullptr;
                continue;
            }
            
            int times = splitSize;
            if(remainder) {
                times++;
                remainder--;
            }
            cout << times << endl;
            ListNode* head = root;
            for (int j = 0; j < times; j++) {
                if (j == times - 1) {
                    aux = root;
                    root = root->next;
                    aux->next = nullptr;
                    continue;
                }
                root = root->next;
            }
            ans[i] = head;
        }
        return ans;
    }
};