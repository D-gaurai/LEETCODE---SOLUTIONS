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
    ListNode* rotateRight(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        if(head==NULL || head->next==NULL){
            return head;
        }
      
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        n=n%count;
        count-=n;
         if(n==0){
        return head;
       }
        ListNode* curr=head;
        while(count--){
           prev=curr;
           curr=curr->next ;
        }
        prev->next=NULL;
        ListNode* tail=curr;
        while(tail->next!=NULL){
     tail=tail->next;
        
        }
        tail->next=head;
      
      return curr;

    }
};