// Reverse Linked List
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
        if(head == NULL) return head;
        ListNode* current_ptr = head;
        ListNode* prev_ptr = NULL;
        ListNode* next_ptr = NULL;
        while(current_ptr != NULL){
            next_ptr = current_ptr->next;
            current_ptr->next = prev_ptr;
            prev_ptr = current_ptr;
            current_ptr = next_ptr;
        }
        head = prev_ptr;
        return head;
    }
};
