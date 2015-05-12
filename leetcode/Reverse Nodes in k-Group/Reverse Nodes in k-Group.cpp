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
    ListNode *reverseKGroup(ListNode *head, int k) {
        if (head == NULL || k <= 1)
            return head;

        ListNode *mockHead = new ListNode(0);
        ListNode *curr = head, *next = NULL, *tail = mockHead;
        while (curr != NULL)
        {
            int ki = 1;
            next = curr->next;
            while (next != NULL && ki < k)
            {
                ki ++;
                next = next->next;
            }

            if (next == NULL && ki < k)
            {
                tail->next = curr;
                break;
            }

            //revesrse current group
			ListNode *gTail = curr;
            head = NULL;
            while (ki > 0)
            {
                ki --;
                next = curr->next;
                curr->next = head;
                head = curr;
                curr = next;
            }

            tail->next = head;
            tail = gTail;
        }

        head = mockHead->next;
        delete mockHead;

        return head;
    }
};