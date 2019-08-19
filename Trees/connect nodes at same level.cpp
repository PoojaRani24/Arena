#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *left=NULL;
	struct node *right=NULL;
	struct node *nextRight=NULL;
};

struct node *createbinarytree(int n,int a[],int index,struct node *root){
	if(index<n){
		node *temp=new node();
		temp->data=a[index];
		temp->left=NULL;
		temp->right=NULL;
		temp->nextRight=NULL;
		root=temp;
		root->left=createbinarytree(n,a,(2*index)+1,root->left);
		root->right=createbinarytree(n,a,(2*index)+2,root->right);
	}
	return root;
}

void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		int d=(root->nextRight)?root->nextRight->data:-1;
		cout<<root->data<<"  --- "<<d<<endl;
		inorder(root->right);
	}
}

void connectNodesOfSameLevel(struct node *root){
	if(root==NULL)
	return;
	queue<struct node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		struct node *temp=q.front();
		q.pop();
		if(temp!=NULL){
		temp->nextRight=q.front();
		if(temp->left)
		q.push(temp->left);
		if(temp->right)
		q.push(temp->right);
		}
		else if(!q.empty()){
			q.push(NULL);
		}
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
	connectNodesOfSameLevel(root);
	inorder(root);
	return 0;
}
