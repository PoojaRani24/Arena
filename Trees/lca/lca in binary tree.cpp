Node * lca(Node* root ,int n1 ,int n2 )
{
   //Your code here 
  
   if(root==NULL)
   return NULL;
   if(root->data==n1 || root->data==n2)
   return root;
   Node *leftlca= lca(root->left,n1,n2);
   Node *rightlca=lca(root->right,n1,n2);
   if(leftlca && rightlca)
   return root;
   return ((leftlca!=NULL)?leftlca:rightlca);
   
}
