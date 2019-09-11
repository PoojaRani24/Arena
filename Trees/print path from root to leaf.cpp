#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};

node* buildtree(int a[],node *root,int index,int n){
	if(index<n){
		node *temp=new node();
		temp->data=a[index];
		temp->left=NULL;
		temp->right=NULL;
		root=temp;
		root->left=buildtree(a,root->left,(2*index+1),n);
		root->right=buildtree(a,root->right,(2*index+2),n);
	}
	return root;
}

void inorder(node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

void print(int a[],int n){
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}

void printallpaths(node *root,int arr[],int len){
	//when root is null
	if(root==NULL)
	return;
	arr[len]=root->data;
	len++;
	if(root->left==NULL && root->right==NULL)
	print(arr,len);
	else{
		printallpaths(root->left,arr,len);
		printallpaths(root->right,arr,len);
	}
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	node *root=NULL;
	root=buildtree(a,root,0,n);
	inorder(root);
	cout<<endl;
	int arr[1000];
	printallpaths(root,arr,0);
	return 0;
}
