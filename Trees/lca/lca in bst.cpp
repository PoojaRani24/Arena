Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(root->data==n1 || root->data==n2)
   return root;
   else if((root->data<n1 && root->data>n2) ||(root->data>n1 && root->data<n2))
   return root;
   else if(root->data>n1 && root->data>n2)
   LCA(root->left,n1,n2);
   else
   LCA(root->right,n1,n2);
}
