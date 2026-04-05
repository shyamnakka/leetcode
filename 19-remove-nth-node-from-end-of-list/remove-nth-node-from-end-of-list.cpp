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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
       ListNode* temp=head;
       int length=0;
       while(temp!=NULL){
        length++;
        temp=temp->next;
       }
       if(n==length) return head->next;
       int cnt=1;
       temp=head;
       for(int i = 0; i < length; i++){
           if( temp!=NULL && cnt == length - n){
                if(temp->next != NULL)
                temp->next = temp->next->next;
           }
        if(temp == NULL) break; 
        temp = temp->next;
        cnt++;
    }
       return head;
    }
};