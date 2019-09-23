void sum(Node *root,int &s){
    if(root==NULL)
    return;
    if(root->right){
        if(root->right->left==NULL && root->right->right==NULL)
        s+=root->right->data;
    }
    sum(root->left,s);
    sum(root->right,s);
}
int rightLeafSum(Node* root)
{
     //Code here
     int s=0;
     sum(root,s);
     return s;
}
