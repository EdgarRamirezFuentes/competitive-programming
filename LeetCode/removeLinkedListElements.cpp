/*
    Problem: Remove Linked List Elements
    Source: https://leetcode.com/problems/remove-linked-list-elements/
    Code by: Edgar A. Ramírez Fuentes
*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
    struct ListNode *tmpNode = NULL;
	struct ListNode *nodeBefore = NULL;
	tmpNode = head;
	nodeBefore = head;
	while (tmpNode != NULL)
	{
		/*
		   Checks if the first node on the list will be deleted and makes 
		   the necessary movements to delete the node and set the new list beginning. 
		 */
		if (tmpNode->val == val && tmpNode == head)
		{ /*There is only one node on the list and It will be deleted. */
			if (tmpNode->next == NULL)
			{
				delete tmpNode;
				return NULL;
			}
			/*There are more nodes forward the first node on the list which will be deleted. */
			head = tmpNode->next;
			delete tmpNode;
			tmpNode = head;
			/*The continue is because It is needed to check the new beginning of the list */
			continue;
		}
		/*
		   Checks if the current node will be deleted and makes the necessary movements to delete
		   the node and do not lost the data forward the node deleted. 
		 */
		if (tmpNode->val == val)
		{
			nodeBefore->next = tmpNode->next;
			delete tmpNode;
			tmpNode = nodeBefore->next;
			continue;
		}
		nodeBefore = tmpNode;
		tmpNode = tmpNode->next;
	}
    return head;
    }
};