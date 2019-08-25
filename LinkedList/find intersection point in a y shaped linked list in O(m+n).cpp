int count(Node *head){
    if(head==NULL)
    return 0;
    int c=0;
    Node *current=head;
    while(current){
        c++;
        current=current->next;
    }
    return c;
}
  
Node *find(Node *head1,Node *head2,int d){
    for(int i=0;i<d;i++){
        head1=head1->next;
    }
    //cout<<head1->data<<endl;
    while(head1!=NULL && head2!=NULL){
        if(head1==head2)
        return head1;
        head1=head1->next;
        head2=head2->next;
    }
    return NULL;
}
   
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int c1=count(head1);
    int c2=count(head2);
    //cout<<"po"<<" ";
    //cout<<c1<<" "<<c2;
    int d=0;
    struct Node *temp=NULL;
    if(c1>c2){
       // cout<<"w1"<<endl;
        d=c1-c2;
       temp=find(head1,head2,d);
    }
    else{
       // cout<<"w2"<<endl;
        d=c2-c1;
        temp=find(head2,head1,d);
    }
    if(temp==NULL)
    return -1;
    else
    return temp->data;
}
