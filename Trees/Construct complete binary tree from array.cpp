#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *insert(int a[],int n,int index,struct node *root){
	if(index<n){
		node *temp=new node();
		temp->data=a[index];
		temp->left=NULL;
		temp->right=NULL;
		root=temp;
		root->left=insert(a,n,(2*index)+1,root->left);
		root->right=insert(a,n,(2*index)+2,root->right);
	}
	return root;
}

void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
	return;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	struct node *root=NULL;
	root=insert(a,n,0,root);
	inorder(root);
	return 0;
}
