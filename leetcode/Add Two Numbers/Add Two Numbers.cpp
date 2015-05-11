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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *mockHead = new ListNode(0);
        ListNode *curr = mockHead;

        int carry = 0;
        int sum = 0;

        while (l1 != NULL || l2 != NULL)
        {
            int l1v = (l1 == NULL) ? 0 : l1->val;
            int l2v = (l2 == NULL) ? 0 : l2->val;
            sum = l1v + l2v + carry;
            carry = sum / 10;
            sum = sum % 10;

            ListNode *newNode = new ListNode(sum);
            curr->next = newNode;

            curr = newNode;
            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }
        if (carry != 0)
        {
            ListNode *newNode = new ListNode(carry);
            curr->next = newNode;
        }

        curr = mockHead->next;
        delete mockHead;

        return curr;
    }
};