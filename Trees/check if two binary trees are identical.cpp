bool isIdentical(Node *r1, Node *r2)
{
    //Your Code here
    if(r1==NULL && r2==NULL)
    return 1;
    else if(r1!=NULL && r2!=NULL){
        if(r1->data==r2->data && isIdentical(r1->left ,r2->left) && isIdentical(r1->right,r2->right))
             return 1;        
    }
    else
    return 0;
}
