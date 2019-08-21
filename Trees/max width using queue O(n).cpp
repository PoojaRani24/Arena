int getMaxWidth(Node* root)
{
   // Your code here
   if(root==NULL)
   return 0;
   queue<Node *>q;
   q.push(root);
   int fwidth=0;
   while(!q.empty()){
      int count=q.size();
       if(count>fwidth)
       fwidth=count;
       while(count--){
       Node *temp=q.front();
       q.pop();
       if(temp->left)
       q.push(temp->left);
       if(temp->right)
       q.push(temp->right);
       }
   }
   return fwidth;
}
