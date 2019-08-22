void mirror(Node* node) 
{
     // Your Code Here
     if(node==NULL)
     return;
     mirror(node->left);
     mirror(node->right);
     Node *temp=NULL;
     temp=node->left;
     node->left=node->right;
     node->right=temp;
}
