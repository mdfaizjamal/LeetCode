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

    int length_linkedlist(ListNode* head){
        int c=0;
        while(head!=NULL)
        {
            c++;
            head= head->next;
        }
        return c;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = length_linkedlist(head);
        if(n==l)
        {
            ListNode* temp = head->next;
            delete(head);
            return temp;
        }

        int travel_front = l-n;
        ListNode* temp=head;
        ListNode* prev=NULL;

        while(travel_front--)
        {
            prev=temp;
            temp=temp->next;
        }

        prev->next = temp->next;
        delete(temp);

        return head;
    }
};