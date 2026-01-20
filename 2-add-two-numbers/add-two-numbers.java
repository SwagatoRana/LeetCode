/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode head = new ListNode();
        ListNode ptr = head;
        ptr.next = null;
        ListNode ptr1 = l1;
        ListNode ptr2 = l2;
        int value, carry = 0;
        value = (ptr1.val + ptr2.val) % 10;
        carry = (ptr1.val + ptr2.val) / 10;
        ptr1 = ptr1.next;
        ptr2 = ptr2.next;
        ptr.val = value;
        while(ptr1 != null && ptr2 != null) {
            value = (ptr1.val + ptr2.val + carry) % 10;
            carry = (ptr1.val + ptr2.val + carry) / 10;
            ListNode temp = new ListNode();
            temp.val = value;
            temp.next = null;
            ptr.next = temp;
            ptr = ptr.next;
            ptr1 = ptr1.next;
            ptr2 = ptr2.next;
        }
        while(ptr1 != null) {
            value = (ptr1.val + carry) % 10;
            carry = (ptr1.val + carry) / 10;
            ListNode temp = new ListNode();
            temp.val = value;
            temp.next = null;
            ptr.next = temp;
            ptr = ptr.next;
            ptr1 = ptr1.next;
        }
        while(ptr2 != null) {
            value = (ptr2.val + carry) % 10;
            carry = (ptr2.val + carry) / 10;
            ListNode temp = new ListNode();
            temp.val = value;
            temp.next = null;
            ptr.next = temp;
            ptr = ptr.next;
            ptr2 = ptr2.next;
        }
        if(carry != 0) {
            ListNode temp = new ListNode();
            temp.val = carry;
            temp.next = null;
            ptr.next = temp;
        }
        return head;
    }
}