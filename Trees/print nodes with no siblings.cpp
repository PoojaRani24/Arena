void printSibling(Node* node)
{
   // Your code here
   if(node==NULL)
   return;
   queue<Node *>q;
   q.push(node);
   vector<int>v;
   int i=0;
   while(!q.empty()){
       Node *temp=q.front();
       q.pop();
       if(temp->left!=NULL && temp->right==NULL)
       v.push_back(temp->left->data);
       if(temp->left==NULL && temp->right!=NULL)
       v.push_back(temp->right->data);
       if(temp->left)
       q.push(temp->left);
       if(temp->right)
       q.push(temp->right);
   }
   if(v.size()==0)
   cout<<"-1";
   else{
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   }
}
