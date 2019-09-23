void sum(Node *root,int &s){
    if(root==NULL)
    return;
    if(root->left){
        if(root->left->left==NULL && root->left->right==NULL)
        s+=root->left->data;
    }
    sum(root->left,s);
    sum(root->right,s);
}

int leftLeafSum(Node* root)
{
    // Code here
    int s=0;
    sum(root,s);
    return s;
}
