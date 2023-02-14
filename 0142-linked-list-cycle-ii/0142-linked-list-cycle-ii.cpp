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
    ListNode *detectCycle(ListNode *head) {
        if(!head)return NULL;
        ListNode *first=head;
        ListNode *slow=head;
        ListNode *entry=head;
        while(first->next!=NULL and first->next->next!=NULL){
            first=first->next->next;
            slow=slow->next;
            if(first==slow){
                while(slow!=entry){
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};