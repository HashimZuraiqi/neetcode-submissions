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
        if (head == nullptr)
            return nullptr;

        vector<int> arr;
        ListNode* reversed = head;
        while (reversed != nullptr) {
            arr.push_back(reversed->val);
            reversed = reversed->next;
        }
        reversed = head;
        for (int i = arr.size() - 1 ; i >= 0 ; i--) {
            reversed->val = arr[i];
            reversed = reversed->next;
        }
        return head;
    }
};
