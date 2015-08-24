/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode* reverse(struct ListNode *head) {
    struct ListNode* pre = NULL;
    struct ListNode* next = NULL;
    while (head) {
        next = head->next;
        head->next = pre;
        pre = head;
        head = next;
    }
    return pre;
}

bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL) 
        return true;
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = reverse(slow->next);
    slow = slow->next;
    while (slow) {
        if (head->val != slow->val) {
            return false;
        }
        head = head->next;
        slow = slow->next;
    }
    return true;
}
