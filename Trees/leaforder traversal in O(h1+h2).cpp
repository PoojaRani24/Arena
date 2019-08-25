#include <iostream>
#include <stack>
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

int leaftraversal(node *root1, node *root2){
	int flag=1;
	stack<node *>s1,s2;
	s1.push(root1);
	s2.push(root2);
	while(!s1.empty() || !s2.empty()){
		if((s1.empty() && !s2.empty()) || (!s1.empty() && s2.empty()))
		flag=0;
		node *temp1=s1.top();
		s1.pop();
		while(temp1!=NULL && (temp1->left!=NULL || temp1->right!=NULL)){
			//non leaf node: internal node 
			if(temp1->right)
			s1.push(temp1->right);
			if(temp1->left)
			s1.push(temp1->left);
			temp1=s1.top();
			s1.pop();
		}
		node *temp2=s2.top();
		s2.pop();
		while(temp2!=NULL && (temp2->left!=NULL || temp2->right!=NULL)){
		    if(temp2->right)
			s2.push(temp2->right);
			if(temp2->left)
			s2.push(temp2->left);
			temp2=s2.top();
			s2.pop();
		}
		if((temp1==NULL && temp2!=NULL) || (temp1!=NULL && temp2==NULL)){
		flag=0;
		break;
		}
		if((temp1!=NULL && temp2!=NULL) && (temp1->data!=temp2->data)){
			flag=0;
			break;
		}
	}
	return flag;
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
	struct node *root1=NULL;
	struct node *root2=NULL;
	root1=buildtree(a,root1,0,n);
	root2=buildtree(b,root2,0,n);
	//inorder(root);
	if(leaftraversal(root1,root2))
	cout<<"Same";
	else
	cout<<"Not Same";
	/*for(int i=0;i<v1.size();i++)
	cout<<v1[i]<<" ";
	for(int i=0;i<v2.size();i++)
	cout<<v2[i]<<" ";
	return 0;*/
}
