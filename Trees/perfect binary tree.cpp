bool check(Node* root,vector<int>&v,int lev){
    if((root->left!=NULL && root->right==NULL)||(root->left==NULL && root->right!=NULL))
    return 0;
    else if(root->left==NULL && root->right==NULL){
    v.push_back(lev);
    return 1;
    }
    else
    return (check(root->left,v,lev+1) && check(root->right,v,lev+1));
} 
   
bool isPerfectRec(struct Node* root, int d, int level )
{
// Your code goes here
vector<int>v;
if(check(root,v,1)){
    for(int i=1;i<v.size();i++){
        if(v[0]!=v[i])
        return 0;
    }
    return 1;
}
return 0;
}
