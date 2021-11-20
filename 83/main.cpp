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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode* currentNode = head;
        while(currentNode->next != NULL){
            if(currentNode->next->val == currentNode->val){
                currentNode->next = currentNode->next->next;
            }
            else currentNode = currentNode->next;
        }
        return head;
    }
};
