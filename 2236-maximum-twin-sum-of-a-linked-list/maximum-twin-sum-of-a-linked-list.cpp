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
    int pairSum(ListNode* head) {
        vector<int> v;
        ListNode* ptr = head;
        while(ptr != NULL) {
            v.push_back(ptr -> val);
            ptr = ptr -> next;
        }
        int ans = INT_MIN;
        int size = v.size();
        for(int i = 0, j = size - 1; i < j; i++, j--) {
            ans = max(ans, v[i] + v[j]);
        }
        return ans;
    }
};