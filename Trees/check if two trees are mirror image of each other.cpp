void mirror(Node *a){
    if(a==NULL)
    return;
    queue<Node *>q;
    q.push(a);
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        Node *p=temp->left;
        temp->left=temp->right;
        temp->right=p;
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
}
   
 int identical(Node *a,Node *b){
     if(a==NULL && b==NULL)
     return 1;
     else if(a!=NULL && b!=NULL){
         if(a->data==b->data && identical(a->left,b->left) && identical(a->right,b->right))
         return 1;
         else 
         return 0;
     }
     else 
     return 0;
 }
   
int areMirror(Node* a, Node* b)
{
   // Your code here
   mirror(a);
   return identical(a,b);
}
