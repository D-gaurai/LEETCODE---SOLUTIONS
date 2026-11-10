class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0;
        ListNode *currA = headA;
        ListNode *currB = headB;

        while (currA != nullptr) {
            lenA++;
            currA = currA->next;
        }

        while (currB != nullptr) {
            lenB++;
            currB = currB->next;
        }

        currA = headA;
        currB = headB;

        while (lenA > lenB) {
            currA = currA->next;
            lenA--;
        }

        while (lenB > lenA) {
            currB = currB->next;
            lenB--;
        }

        while (currA != currB) {
            currA = currA->next;
            currB = currB->next;
        }

        return currA;
    }
};