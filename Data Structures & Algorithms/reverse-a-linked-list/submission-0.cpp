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
    ListNode* reverseList(ListNode* head) {
        ListNode* currHead = head;
        ListNode* prevHead = nullptr;

        while (currHead) {
            ListNode* storeHead = currHead->next;
            currHead->next = prevHead;
            prevHead = currHead;
            currHead = storeHead;
        }

        return prevHead;
    }
};
