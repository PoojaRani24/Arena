//uses extra O(m+n) space where
// m = number of leaf nodes in first tree
//n = leaf nodes in second tree
// optimised solution takes o(h1+h2) space
#include <iostream>
#include <vector>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};

node *buildtree(int a[],node *root,int index,int n){
	if(index<n){
		node *temp=new node();
		temp->data=a[index];
		temp->left=NULL;
		temp->right=NULL;
		temp->left=buildtree(a,temp->left,(2*index)+1,n);
		temp->right=buildtree(a,temp->right,(2*index)+2,n);
		return temp;
	}
	return NULL;
}

void inorder(node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

void leaftraversal(node *root, vector<int> &v){
	if(root==NULL)
	return;
	if(root->left==NULL && root->right==NULL){
		v.push_back(root->data);
		return;
	}
	leaftraversal(root->left,v);
	leaftraversal(root->right,v);
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
    for(int i=0;i<n;i++)
	cin>>b[i];
	vector<int>v1,v2;
	struct node *root1=NULL;
	struct node *root2=NULL;
	root1=buildtree(a,root1,0,n);
	root2=buildtree(b,root2,0,n);
	//inorder(root);
	leaftraversal(root1,v1);
	leaftraversal(root2,v2);
	/*for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<" ";
	for(int i=0;i<v2.size();i++)
	cout<<v2[i]<<" ";
	return 0;*/
	int flag=1;
	if(v1.size()!=v2.size())
	flag=0;
	else{
		for(int i=0;i<v1.size();i++){
			if(v1[i]!=v2[i])
			flag=0;
		}
	}
	if(flag==0)
	cout<<"Not same";
	else
	cout<<"Same";
}
