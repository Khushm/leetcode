// Linked List Cycle
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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        ListNode* slowPointer = head;
        ListNode* fastPointer = head->next;
        while(fastPointer != slowPointer){
            if(fastPointer->next == NULL || fastPointer->next->next == NULL)
                return false;
            fastPointer = fastPointer->next->next;
            slowPointer = slowPointer->next;
        }   
        return true;
    }
};
