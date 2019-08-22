Node* addTwoLists(Node* first, Node* second) {
    // Code here
    Node *res=NULL;
    Node *last=NULL;
    int sum=0,carry=0;
    while(first || second){
        sum=carry+(first?first->data:0)+(second?second->data:0);
        if(sum>9)
            carry=1;
        else
         carry=0;
         sum=sum%10;
        Node *temp=new Node(sum);
        if(res==NULL){
            res=temp;
            last=temp;
        }
        else{
            last->next=temp;
            last=temp;
        }
        if(first)
        first=first->next;
        if(second)
        second=second->next;
    }
    if(carry){
        Node *temp=new Node(carry);
        last->next=temp;
    }
    return res;
}
