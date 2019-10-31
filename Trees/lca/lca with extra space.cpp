bool find(vector<Node *> &v,int t,Node *root){
    if(root==NULL)
    return false;
    if(root->data==t || find(v,t,root->left) || find(v,t,root->right))
   { v.push_back(root);
    return true;
   }
}
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   vector<Node *>v1,v2;
   find(v1,n1,root);
   find(v2,n2,root);
   for(int i=0;i<v1.size();i++){
       for(int j=0;j<v2.size();j++){
           if(v1[i]==v2[j])
           return v1[i];
       }
   }
}
