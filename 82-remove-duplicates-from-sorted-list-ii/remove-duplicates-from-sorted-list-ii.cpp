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
        if(head==NULL || head->next==NULL ) return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* front=head->next;
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
         while(front!=NULL){
            if(prev==NULL){
                if(curr->val!=front->val){
                    temp->next=curr;
                    temp=temp->next;
                }
            }
           else{
                 if(prev->val!=curr->val && curr->val!=front->val){
                    temp->next=curr;
                    temp=temp->next;
                  }
             }

            
            prev=curr;
            curr=front;
            front=front->next;
         }
         if(prev!=NULL && prev->val!=curr->val){
            temp->next=curr;
            temp=temp->next;
         }
         temp->next=NULL;
         return dummy->next;

        
    }
};