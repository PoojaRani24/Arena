void sum(Node *root,int &s){
    if(root==NULL)
    return;
    if(root->left==NULL && root->right==NULL)
    s+=root->data;
    if(root->left)
    sum(root->left,s);
    if(root->right)
    sum(root->right,s);
}

int sumOfLeafNodes(Node *r ){
     /*Your code here */
     int s=0;
     sum(r,s);
     return s;
}
