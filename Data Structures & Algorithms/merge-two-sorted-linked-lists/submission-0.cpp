class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* merged = &dummy;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                merged->next = new ListNode(list1->val);
                list1 = list1->next;
            } else {
                merged->next = new ListNode(list2->val);
                list2 = list2->next;
            }

            merged = merged->next;
        }

        while (list1 != nullptr) {
            merged->next = new ListNode(list1->val);
            merged = merged->next;
            list1 = list1->next;
        }

        while (list2 != nullptr) {
            merged->next = new ListNode(list2->val);
            merged = merged->next;
            list2 = list2->next;
        }

        return dummy.next;
    }
};