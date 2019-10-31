 Node *findlca(Node *root,int a,int b){
       if(root==NULL)
       return NULL;
       if(root->data==a || root->data==b)
       return root;
       Node *leftlca=findlca(root->left,a,b);
       Node *rightlca=findlca(root->right,a,b);
       if(leftlca && rightlca)
       return root;
       return ((leftlca!=NULL)?leftlca:rightlca);
   }
   
  bool find(Node *root,int a,int &c){
      if(root==NULL)
      return false;
      if(root->data==a || find(root->left,a,c) || find(root->right,a,c)){
          c++;
          return true;
      }
      return false;
  }
   
int findDist(Node* root, int a, int b)
{
    // Your code here 
    if(root==NULL)
    return 0;
    Node *lca=findlca(root,a,b);
    if(lca==NULL)
    return 0;
    int c1=0,c2=0,sum=0;
    find(lca,a,c1);
    //cout<<c1<<" is c1"<<endl;
    find(lca,b,c2);
    //cout<<c2<<" is c1"<<endl;
    sum=c1+c2-2;
    return sum;
    return 1;
}
