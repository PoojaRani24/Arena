/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class compare{
    public:
    bool operator()(struct ListNode *a, struct ListNode *b){
            return a->val>b->val;
        }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        if(lists.size()==1)
            return lists[0];
        priority_queue<ListNode* ,vector<ListNode*>,compare>p;
        int k=lists.size();
        ListNode *head=NULL, *last=NULL;
        for(int i=0;i<k;i++){
            if(lists[i]){
            p.push(lists[i]);
        cout<<lists[i]->val<<endl;}
        }
        while(!p.empty()){
            ListNode* temp=p.top();
            p.pop();
            insert(temp->val,head,last);
            if(temp->next!=NULL)
                p.push(temp->next);
        }
        return head;
    }
    
    void insert(int data,ListNode *&head, ListNode *&last){
        ListNode* temp=new ListNode(data);
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
