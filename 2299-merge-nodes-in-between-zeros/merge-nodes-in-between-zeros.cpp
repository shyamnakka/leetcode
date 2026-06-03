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
    ListNode* mergeNodes(ListNode* head) {
        head=head->next;
        ListNode* temp=new ListNode(0);
        ListNode* prev=temp;
        while(head!=NULL){
            int sum=0;
             while(head->val!=0){
                sum+=head->val;
                head=head->next;
             }
             head=head->next;
             prev->next=new ListNode(sum);
             prev=prev->next;
        }
        return temp->next;
        
    }
};