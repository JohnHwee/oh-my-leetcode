/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;
    struct ListNode *head = NULL;
    if (l1->val < l2->val) {
        head = l1;
        head->next = mergeTwoLists(l2, l1->next);
    } else {
        head = l2;
        head->next = mergeTwoLists(l1, l2->next);
    }
    return head;
}
