void print(int a[],int l){
     for(int i=0;i<l;i++){
         cout<<a[i]<<" ";
     }
 }
 
 void path(Node *root,int a[],int len){
     if(root==NULL)
     return;
     else{
         a[len]=root->data;
         len++;
     }
     if(root->left==NULL && root->right==NULL){
     print(a,len);
     cout<<"#";}
     path(root->left,a,len);
     path(root->right,a,len);
 }
 
void printPaths(Node* root)
{
    // Code here
    int a[100];
    path(root,a,0);
    cout<<endl;
}
