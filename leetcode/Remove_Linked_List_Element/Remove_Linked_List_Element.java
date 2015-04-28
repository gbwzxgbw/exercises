/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode mockHead = new ListNode(0);
        ListNode curr = head;
        ListNode pre = mockHead;
        pre.next = head;

        while (curr != null)
        {
            if (curr.val != val)
            {
                pre = curr;
                curr = curr.next;
            }
            else
            {
                pre.next = curr.next;
                curr = curr.next;
            }
        }

        head = mockHead.next;
        mockHead = null;
        return head;
    }
}