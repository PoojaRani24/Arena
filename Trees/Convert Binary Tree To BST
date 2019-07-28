//Create binary tree O(n);
//Inorder Traversal of Binary tree O(n) and store in vector
//sort vector O(n log n)
//Inorder traversal of binary tree and do root->data=v[i] O(n);

#include <bits/stdc++.h>
using namespace std;

vector<int>v;

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
	v.push_back(root->data);
		inorder(root->right);
	} return;
}

void inorderbst(struct node *root){
	if(root!=NULL){
		inorderbst(root->left);
	cout<<root->data<<" ";
		inorderbst(root->right);
	} return;
}

void changetobst(struct node *root,int &i){
	if(root!=NULL){
		changetobst(root->left,i);
		root->data=v[i];
		i++;
		changetobst(root->right,i);
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
	cout<<"BINARY TREE"<<endl;
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<endl;
	sort(v.begin(),v.end());
	int i=0;
	changetobst(root,i);
	cout<<"BINARY SEARCH TREE"<<endl;
	inorderbst(root);
	return 0;
}
