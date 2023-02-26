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
    ListNode* partition(ListNode* head, int x) {
        ListNode* f_half=new ListNode(0);
        ListNode* first=f_half;
        ListNode* s_half=new ListNode(0); 
        ListNode* second=s_half;
        ListNode* curr=head;
        while(curr){
            if(curr->val<x){
                first->next=curr;
                first=curr;
            }
            else{
                second->next=curr;
                second=curr;
            }
            curr=curr->next;
        }
        second->next=NULL;
        first->next=s_half->next;
        return f_half->next;
    }
};