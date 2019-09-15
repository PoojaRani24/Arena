bool check(Node *root){
 if(root->left==NULL && root->right==NULL)
    return 1;
 else if((root->left!=NULL && root->right==NULL) || (root->left==NULL && root->right!=NULL))
    return 0;
 return (check(root->left)&&check(root->right));
}
bool isFullTree (struct Node* root)
{
//add code here.
if(root==NULL)
return 1;
return check(root);
}
