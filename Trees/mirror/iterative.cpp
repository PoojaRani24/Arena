void mirror(Node* node) 
{
     // Your Code Here
     if(node==NULL)
     return;
     queue<Node *>q;
     q.push(node);
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
