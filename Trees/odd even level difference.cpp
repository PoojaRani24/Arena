int findsum(Node *root, int level,int &sum){
    if(level==1){
    sum+=root->data;
    return sum;
    }
    findsum(root->left,level-1,sum);
    findsum(root->right,level-1,sum);

}

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

int getLevelDiff(Node *root)
{
   //Your code here
   int h=height(root);
   int odd=0,even=0;
   for(int i=1;i<=h;i++){
       if(i%2!=0)
        odd=findsum(root,i,odd);
       else
        even=findsum(root,i,even);
   }
   //cout<<odd<<" "<<even<<endl;
   return odd-even;
}
