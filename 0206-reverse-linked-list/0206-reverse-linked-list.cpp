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
        if(head == NULL)
        return NULL;
        if(head->next == NULL)
        return head;
        ListNode* temp;
        ListNode* forward;
        ListNode* prev = head;
        forward = temp = head->next;
        while( forward->next != NULL)
        {
            forward= forward->next;
            temp->next = prev;
            prev = temp;
            temp=forward;
        }
        temp->next= prev;
        head->next = NULL;
        return temp;
    }
};