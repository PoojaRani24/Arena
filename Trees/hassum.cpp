bool check(Node *root,int k,int sum){
    if(root==NULL)
    return false;
    sum+=root->data;
    if(root->left==NULL && root->right==NULL && sum==k)
    return true;
    else{
        return(check(root->left,k,sum)||check(root->right,k,sum));
    }
}

bool hasPathSum(Node *root, int k)
{
   //Your code here
   return check(root,k,0);
}
