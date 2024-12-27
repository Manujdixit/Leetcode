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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int m = 0, n = 0;

        int l1 = 0, l2 = 0;
        ListNode *tempA = headA, *tempB = headB;

        while (tempA) {
            l1++;
            tempA = tempA->next;
        }

        while (tempB) {
            l2++;
            tempB = tempB->next;
        }

        tempA = headA;
        tempB = headB;

        int diff = abs(l1 - l2);

        if (l1 > l2) {
            while (diff--)
                tempA = tempA->next;
        } else {
            while (diff--)
                tempB = tempB->next;
        }

        while (tempA && tempB) {
            if (tempA == tempB)
                return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return nullptr;
    }
};
