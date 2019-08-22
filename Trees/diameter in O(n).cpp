int height(Node *root,int &res){
    if(root==NULL)
    return 0;
    int ls=height(root->left,res);
    int rs=height(root->right,res);
    if(res<(ls+rs+1))
    res=ls+rs+1;
    if(ls>rs)
    return ls+1;
    else
    return rs+1;
}

int diameter(Node* root)
{
   // Your code here
   int res=INT_MIN;
   if(root==NULL)
   return 0;
   height(root,res);
   return res;
}
