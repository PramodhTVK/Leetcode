class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;
        ListNode* curr = head;
        int len = 0;
        while (curr) {
            len++;
            curr = curr->next;
        }
        
        while (len >= k) {
            curr = pre->next;
            for (int i = 1; i < k; i++) {
                ListNode* nex = curr->next;
                curr->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
            }
            pre = curr;
            len -= k;
        }
        
        return dummy->next;
    }
};
