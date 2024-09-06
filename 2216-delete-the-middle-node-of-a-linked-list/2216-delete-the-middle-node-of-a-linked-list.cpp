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
 int count(ListNode* head)
 {
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
    return c;
 }
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
        return head;

        if(head->next==NULL)
        {
            delete(head);
            return NULL;
        }
        ListNode* prev=NULL;
        ListNode* temp=head;
        int l= count(head);
        int n=l/2,i=0;
        while(i!=n){
            prev=temp;
            temp=temp->next;
            i++;
        }
        prev->next=temp->next;
        delete(temp);
        return head;
    }
};