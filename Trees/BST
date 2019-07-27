#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* insert(struct node *root,int a){
	node *temp=new node;
		temp->data=a;
		temp->left=NULL;
		temp->right=NULL;
		if(root==NULL){
		root=temp;
		}
		else{
			if(a>root->data)
				root->right=insert(root->right,a);
			
			else
			   root->left=insert(root->left,a);	
			}
			return root;
}

void inorder(struct node* root){

		if(root!=NULL){
			inorder(root->left);
			cout<<root->data<<" ";
			inorder(root->right);
	}
}
int main() {
	// your code goes here
	int n,a;
	cin>>n;
	struct node *root=NULL;
	for(int i=0;i<n;i++){
		cin>>a;
		if(i==0)
		root=insert(root,a);
		else
		insert(root,a);
	}
	inorder(root);
	return 0;
}
