#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* insert(struct node *root,int key){
	node *temp=new node();
	temp->data=key;
	temp->right=NULL;
	temp->left=NULL;
	
	if(root==NULL)
	root=temp;
	else{
		if(root->left==NULL)
		root->left=insert(root->left,key);
		else if(root->right==NULL)
		root->right=insert(root->right,key);
		else
			root->left=insert(root->left,key);
	}
	return root;
}

void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	} return;
}

int main() {
	// your code goes here
	struct node *root=NULL;
	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(i==0)
		root=insert(root,temp);
		else
		insert(root,temp);
	}
	inorder(root);
	return 0;
}
