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
    int pairSum(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;  
        }
        ListNode* old=head;
        int length=1;
        while(length<n/2){
            old=old->next;
            length++;
        }
        ListNode* curr=old->next;
        ListNode* prev=NULL;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        old->next=prev;
        int maxi=INT_MIN;
        while(prev!=NULL){
            int sum=(head->val)+(prev->val);
            maxi=max(maxi,sum);
            head=head->next;
            prev=prev->next;
        }
        return maxi;
        
        
    }
};