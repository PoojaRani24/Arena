#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left=NULL;
	struct node *right=NULL;
};

struct node *createbinarytree(int n,int a[],int index,struct node *root){
	if(index<n){
		node *temp=new node();
		temp->data=a[index];
		temp->left=NULL;
		temp->right=NULL;
		root=temp;
		root->left=createbinarytree(n,a,(2*index)+1,root->left);
		root->right=createbinarytree(n,a,(2*index)+2,root->right);
	}
	return root;
}

void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

int height(struct node* root){
	if(root==NULL)
	return 0;
	int ls,rs;
	ls=height(root->left);
	rs=height(root->right);
	if(ls>rs)
	return (ls+1);
	else
	return (rs+1);
}

void printlevelorder(struct node *root,int level){
	if(root==NULL)
	return;
	if(level==1){
	cout<<root->data<<" ";
	}
	else{
		printlevelorder(root->left,level-1);
		printlevelorder(root->right,level-1);
	}
}

 void levelordertraversal(struct node *root){
 	int h=height(root);
 	//cout<<h<<endl;
 	for(int i=1;i<=h;i++){
 		printlevelorder(root,i);
 		cout<<endl;
 	}
 }

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	struct node *root=NULL;
	root=createbinarytree(n,a,0,root);
	//inorder(root);
	levelordertraversal(root);
	return 0;
}
