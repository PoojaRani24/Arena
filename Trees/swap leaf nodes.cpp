void screwthishit(Node *root, Node * &first, Node * &second){
    if(root==NULL)
    return;
    else if(root->left==NULL && root->right==NULL)
    {
        if(first==NULL)
        first=root;
        else if(second==NULL)
        second=root;
        if(first && second)
        {
            int temp=first->data;
            first->data=second->data;
            second->data=temp;
            //we are dereferencing the pointers;
            first=NULL;
            second=NULL;
        }
    }
    screwthishit(root->left,first,second);
    screwthishit(root->right,first,second);
}

void pairwiseSwap(Node *root){
    if(root==NULL)
    return;
    Node *first=NULL,*second=NULL;
    screwthishit(root,first,second);
}
      
