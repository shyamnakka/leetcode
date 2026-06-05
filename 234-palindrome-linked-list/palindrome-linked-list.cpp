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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        string s="";
        while(temp!=NULL){
            s+=(temp->val+'0');
            temp=temp->next;
        }
        int n=s.size();
        bool ispal=true;
        for(int i=n-1;i>0;i--){
            if(s[i]-'0'!=head->val){
                ispal=false;
                break;

            }
            head=head->next;
        }
        if(ispal) return true;
        else return false;
        
    }
};