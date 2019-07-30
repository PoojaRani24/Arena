#include<bits/stdc++.h>
using namespace std;

struct bstnode{
    bstnode* left;
    int data;
    bstnode* right;};

bstnode* getnewnode(int data){
bstnode* newnode=new bstnode();
newnode->data=data;
newnode->left=NULL;
newnode->right==NULL;
return newnode;}

bstnode* in(bstnode* root,int data){
if(root==NULL)
    root=getnewnode(data);
else if(data<=root->data)
   root->left=in(root->left,data);
else
    root->right=in(root->right,data);
 return root;}

void inorder(bstnode* root){
if(root==NULL)
    return;
inorder(root->left);
cout<<root->data <<endl;
inorder(root->right);
}

int main(){
bstnode* root=NULL;
root=in(root,15);
root=in(root,10);
root=in(root,20);
root=in(root,25);
root=in(root,8);
root=in(root,12);
root=in(root,17);
root=in(root,19);
cout<<"Elements in Inorder BST are:"<<endl;
inorder(root);
}
