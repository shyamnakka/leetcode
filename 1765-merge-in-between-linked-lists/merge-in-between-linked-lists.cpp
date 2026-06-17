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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int cnt=0;
         ListNode* prev=NULL;
         ListNode* tail=NULL;
         ListNode* temp=list1;
        while(temp!=NULL){
            if(cnt==a-1){
                prev=temp;
            }
            else if(cnt==b+1){
                tail=temp;
            }
            cnt++;
            temp=temp->next;
        }
        ListNode* dup=list2;
        while(dup->next!=NULL){
            dup=dup->next;
        }
        prev->next=list2;
        dup->next=tail;
        return list1;
        
    }
};