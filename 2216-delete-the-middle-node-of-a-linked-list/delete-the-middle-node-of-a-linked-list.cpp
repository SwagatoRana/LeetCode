/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* ptr = head;
        int count = 0;
        while(ptr != NULL) {
            count++;
            ptr = ptr -> next;
        }
        ptr = head;
        int m = count / 2;
        for(int i = 1; i < m; i++) {
            ptr = ptr -> next;
        }
        if(count == 1) {
            head = NULL;
            return head;
        }
        ptr -> next = ptr -> next -> next;
        return head;
    }
};