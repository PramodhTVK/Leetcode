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
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast and fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        int max_sum=0;
        ListNode* last=slow;
        slow=slow->next;
        last->next=NULL;
        ListNode* q=NULL;
        ListNode* r=NULL;
        while(slow){
            r=q;
            q=slow;
            slow=slow->next;
            q->next=r;
        }
        while(q){
            max_sum=max(max_sum,head->val+q->val);
            q=q->next; 
            head=head->next;
        }
        return max_sum;
    }
};