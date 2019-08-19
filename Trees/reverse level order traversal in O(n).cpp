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

void levelordertraversal(struct node *root){
	if(root==NULL)
	return;
	queue<struct node *>q;
	stack<struct node *>s;
	q.push(root);
	while(!q.empty()){
			struct node *temp=q.front();
			q.pop();
			s.push(temp);
			if(temp->right)
			q.push(temp->right);
			if(temp->left)
			q.push(temp->left);
	}
	while(!s.empty()){
		cout<<s.top()->data<<" ";
		s.pop();
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
