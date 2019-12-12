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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head=NULL;
        if(lists.size()==0)
            return NULL;
        if(lists.size()==1)
            return lists[0];
        head=merge(lists[0],lists[1]);
        for(int i=2;i<lists.size();i++){
          head=merge(head,lists[i]);
        }
        return head;
    }
    
    ListNode* merge(ListNode *l1,ListNode *l2){
        ListNode *head=NULL, *last=NULL;
        while(l1 && l2){
            if(l1->val<l2->val){
                insert(l1->val,head,last);
                l1=l1->next;
            }
            else{
                insert(l2->val,head,last);
                l2=l2->next;
            }
        }
        while(l1){
            insert(l1->val,head,last);
                l1=l1->next;
        }
        while(l2){
            insert(l2->val,head,last);
                l2=l2->next;
        }
        return head;
    }
    
     void insert(int data,ListNode *&head,ListNode *&last){
        ListNode *temp=new ListNode(data);
        if(head==NULL){
            head=temp;
            last=temp;
        }
        else{
            last->next=temp;
            last=temp;
        }
    }
};
