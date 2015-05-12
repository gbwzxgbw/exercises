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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *tail=head, *nth=head;
        for (int i=0; i<n; i++)
        {
            tail=tail->next;
        }
        if (tail==NULL)
        {
            ListNode *newHead=head->next;
            free(head);
            return newHead;
        }
        while (tail->next != NULL)
        {
            tail=tail->next;
            nth=nth->next;
        }
        ListNode *temp=nth->next;
        nth->next = temp->next;
        free(temp);
        return head;
    }
};