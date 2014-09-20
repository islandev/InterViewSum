/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *insertionSortList(ListNode *head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *cur=head;
        ListNode *next=head;
        ListNode *new_head=NULL;
        ListNode *new_tail=NULL;
        while(cur){
            next=cur->next; 
            if(new_head==NULL){
                new_head=cur;
                new_tail=cur;
                new_tail->next=NULL;
            }else{
                ListNode *tmp_pre=NULL;
                ListNode *tmp_cur=new_head;
                while(tmp_cur!=NULL&&cur->val>tmp_cur->val){
                    tmp_pre=tmp_cur;
                    tmp_cur=tmp_cur->next;
                }
                if(tmp_pre==NULL){
                    cur->next=new_head;
                    new_head=cur;
                }else if(tmp_cur==NULL){
                    tmp_pre->next=cur;
                    cur->next=NULL;
                }else{
                    tmp_pre->next=cur;
                    cur->next=tmp_cur;
                }
            }
             cur=next ;
        }
          return new_head;  
       }
    
};