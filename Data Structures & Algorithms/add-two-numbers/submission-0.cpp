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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // 9 -> 2 -> 4
        // 4 -> 5 -> 6 -> 8 -> 3  
        // 3 -> 8 -> 0 -> 9 -> 3
        // Time: O(max(l1, l2))
        // Space: O(1)
        // 8
        // 8
        // 6 -> 
        int remainder = 0;
        ListNode* dummyPtr = new ListNode(0);
        ListNode* cur = dummyPtr;
        while (l1 or l2) {
            int val1, val2;
            if (l1 == nullptr) {
                val1 = 0;
                val2 = l2->val;
            } else if (l2 == nullptr) {
                val1 = l1->val;
                val2 = 0;
            } else {
                val1 = l1->val;
                val2 = l2->val;
            }
            
            int sum = val1 + val2 + remainder;
            remainder = sum / 10;
            sum = sum % 10;

            ListNode* tmp = new ListNode(sum);
            cur->next = tmp;

            cur = cur->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        if (remainder > 0) {
            ListNode* tmp = new ListNode(remainder);
            cur->next = tmp;
        }

        return dummyPtr->next;
    }
};
