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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=new ListNode(0,head);
        ListNode* fast=curr;
        ListNode*slow=curr;
        for(int i=0;i<=n;i++){
            fast=fast->next;
        }
        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* deletenode=slow->next;
        slow->next=slow->next->next;
        delete deletenode;
        ListNode* newhead=curr->next;
        delete curr;
        return newhead;
    }
};