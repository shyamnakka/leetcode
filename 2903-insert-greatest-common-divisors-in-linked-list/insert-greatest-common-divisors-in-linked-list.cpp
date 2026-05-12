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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=head;
         
        while(temp!=NULL && temp->next!=NULL){
            int x=temp->val;
            int y=temp->next->val;
            while(y!=0){
                int rem=x%y;
                x=y;
                y=rem;
            }
           ListNode* old=temp->next;
           prev->next=new ListNode(x);
           prev->next->next=old;
           prev=old;
           temp=old;
        }
        return head;
        
    }
};