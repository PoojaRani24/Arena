void leaf(Node *root,vector<int>&v,int lev){
    if(root==NULL)
    return;
    if(root->left==NULL && root->right==NULL)
    v.push_back(lev);
    if(root->left)
    leaf(root->left,v,lev+1);
    if(root->right)
    leaf(root->right,v,lev+1);
}

bool check(Node *root)
{
    //Your code here
    vector<int>v;
    if (root==NULL ||(root->left==NULL && root->right==NULL))
    return 1;
    leaf(root,v,1);
    for(int i=1;i<v.size();i++){
        if(v[0]!=v[i])
        return 0;
    }
    return 1;
}
