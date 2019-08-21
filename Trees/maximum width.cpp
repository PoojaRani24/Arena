int height(Node *root){
    if(root==NULL)
    return 0;
    int ls=height(root->left);
    int rs=height(root->right);
    if(ls>rs)
    return ls+1;
    else
    return rs+1;
}

int width(Node *root,int level){
    if(root==NULL)
    return 0;
    if(level==1)
    return 1;
    return width(root->left,level-1)+width(root->right,level-1);
}

int getMaxWidth(Node* root)
{
   // Your code here
   int h=height(root);
   int count;
   int fwidth=INT_MIN;
   for(int i=1;i<=h;i++){
       count=width(root,i);
       if(count>fwidth)
       fwidth=count;
   }
   return fwidth;
}
