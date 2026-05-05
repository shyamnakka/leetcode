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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
         int len = 0;
        ListNode* t = head;
        while (t) {
            len++;
            t = t->next;
        }
         k = k % len;
          if (k == 0) return head;

        ListNode temp(0);
        temp.next=head;
        ListNode* prev;
        ListNode* current=NULL;
        while(k>0){
            prev=&temp;
            while(prev->next){
                 current=prev->next;
                if(current->next==NULL){
                    prev->next=NULL;
                    current->next=head;
                    head=current;
                    k--;
                    break;
                }
                prev=prev->next;
            }
           
        }
        return head;
        
    }
};