bool print(struct Node *root, int target)
{
     // Code here
     if(root==NULL)
     return false;
     else if(root->data==target)
     return true;
     else if(print(root->left,target)||print(root->right,target)){
         cout<<root->data<<" ";
         return true;
     }
     else
     return false;
}

bool printAncestors(struct Node *root, int target){
    print(root,target);
    cout<<endl;
}
