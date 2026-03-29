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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==NULL) return NULL;
        unordered_set<int>s(nums.begin(),nums.end());
        while(head!=NULL && s.count(head->val)>0){
            
            head=head->next;
           

        }
        ListNode* temp=head;
        
        while( temp!=NULL &&temp->next!=NULL){
            if(s.count(temp->next->val)){
                temp->next=temp->next->next;
               
              
            }
            else{
                temp=temp->next;
            }
        }
        return head;

        
    }
};