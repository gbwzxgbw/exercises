/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *mockHead = new ListNode(0);
        ListNode *curr = mockHead;
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val <= l2->val)
            {
                curr->next = l1;
                l1=l1->next;
            }
            else
            {
                curr->next = l2;
                l2=l2->next;
            }
            curr = curr->next;
        }
        if (l1 != NULL)
        {
            curr->next = l1;
        }
        if (l2 != NULL)
        {
            curr->next = l2;
        }
        curr = mockHead->next;
        delete mockHead;

        return curr;
    }
};