bool isIsomorphic(Node *root1,Node *root2)
{
//add code here.
if(root1==NULL && root2==NULL)
return true;
else if((root1==NULL && root2!=NULL )||(root1!=NULL && root2==NULL))
return false;
else if(root1->data!=root2->data)
return false;
else{
    (isIsomorphic(root1->left,root2->left) && (isIsomorphic(root1->right,root2->right)))||((isIsomorphic(root1->left,root2->right))&&(isIsomorphic(root1->right,root2->left)));
}
}
