/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // Create a dummy node to simplify the code
    struct ListNode dummy;
    struct ListNode* current = &dummy;

    // Traverse both lists until one of them becomes NULL
    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    // If one list is not exhausted, append the remaining nodes
    if (list1 != NULL) {
        current->next = list1;
    } else {
        current->next = list2;
    }

    // Return the merged list (excluding the dummy node)
    return dummy.next;
}
