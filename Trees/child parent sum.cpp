int isSumProperty(Node *root)
{
 // Add your code here
 if(root==NULL || (root->right==NULL && root->left==NULL))
 return 1;
 int ls=0,rs=0;
 if(root->left)
 ls=root->left->data;
 if(root->right)
 rs=root->right->data;
 if(root->data==ls+rs && isSumProperty(root->left) && isSumProperty(root->right))
 return 1;
}
