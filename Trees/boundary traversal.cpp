void rightboundary(Node *root){
    if(root==NULL)
    return;
    if(root->right){
        rightboundary(root->right);
        cout<<root->data<<" ";
    }
    else if(root->left){
    rightboundary(root->left);
    cout<<root->data<<" ";}
}

void leafnode(Node *root){
    if(root==NULL)
    return;
    leafnode(root->left);
    if(root->left==NULL && root->right==NULL)
    cout<<root->data<<" ";
    leafnode(root->right);
}

void leftboundary(Node *root){
    if(root==NULL)
    return;
    if(root->left){
        cout<<root->data<<" ";
        leftboundary(root->left);
    }
    else if(root->right){
        cout<<root->data<<" ";
        leftboundary(root->right);
    }
}

void printBoundary(Node *root)
{
     //Your code here
     cout<<root->data<<" ";
     //cout<<"l"<<" ";
     leftboundary(root->left);
     //cout<<"le"<<" ";
     leafnode(root);
     //cout<<"r"<<" ";
     rightboundary(root->right);
}
