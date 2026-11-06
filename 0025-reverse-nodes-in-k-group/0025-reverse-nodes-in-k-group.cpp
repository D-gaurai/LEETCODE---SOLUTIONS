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
    ListNode* reverseKGroup(ListNode* head, int k) {
  // Step 1: Check if there are at least k nodes left in the list
        ListNode* curr = head;
        int count = 0;
        while (curr != nullptr && count < k) {
            curr = curr->next;
            count++;
        }
        // If we have fewer than k nodes, we don't reverse them
        if (count < k) {
            return head;
        }
        // Step 2: Reverse the first k nodes of the current segment
        curr = head;
        ListNode* prev = nullptr;
        ListNode* nextNode = nullptr;
        
        for (int i = 0; i < k; i++) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        // Step 3: NextNode now points to the (k+1)-th node.
        // Recurse for the remaining list and connect it to the tail of our reversed segment (head)
        if (nextNode != nullptr) {
            head->next = reverseKGroup(nextNode, k);
        }
        
        // 'prev' is the new head of the reversed segment
        return prev;
    }
};

  