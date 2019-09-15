bool isSumTree(Node* root)
{
     // Your code here
     if(root==NULL ||(root->left==NULL && root->right==NULL))
     return 1;
     else{
         if(isSumTree(root->left) && isSumTree(root->right)){
             int ls=0,rs=0;
             if(root->left==NULL)
             ls=0;
             else if(root->left->left==NULL && root->left->right==NULL)
             ls=root->left->data;
             else
             ls=2*(root->left->data);
             if(root->right==NULL)
             rs=0;
             else if(root->right->left==NULL && root->right->right==NULL)
             rs=root->right->data;
             else
             rs=2*(root->right->data);
             if(root->data==ls+rs)
             return 1;
             else 
             return 0;
         }
     }
}
