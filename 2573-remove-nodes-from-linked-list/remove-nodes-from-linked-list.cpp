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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp);
            temp=temp->next;
        }
        ListNode* newhead=st.top();
        st.pop();
       ListNode* tmp=newhead;
       while(!st.empty()){
        tmp->next=st.top();
        st.pop();
        tmp=tmp->next;
       }
       tmp->next=NULL;
       int maxi=0;
       ListNode* dummy=newhead;
       ListNode* original=new ListNode(0);
       ListNode* prev=original;
       while(dummy!=NULL){
        if(maxi<=dummy->val){
            original->next=dummy;
            original=original->next;
            maxi=dummy->val;
        }
        dummy=dummy->next;
       }
       original->next=NULL;
       ListNode* p=NULL;
       ListNode* curr=prev->next;
       while(curr!=NULL){
        ListNode* nextnode=curr->next;
        curr->next=p;
        p=curr;
        curr=nextnode;
       }
       return p;


    }
};