#include <bits/stdc++.h>
using namespace std;

struct linkedlist{
	int value;
	struct linkedlist *next;
};

struct binarytree{
	int data;
	struct binarytree *left=NULL;
	struct binarytree *right=NULL;
};

struct linkedlist *insert(struct linkedlist* head,int value){
	 linkedlist *temp=new linkedlist();
	 temp->value=value;
	 temp->next=head;
	 head=temp;
	 return head;
}

struct binarytree* createbinarytree (struct linkedlist *head){
	binarytree *temp= new binarytree();
	temp->data=head->value;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

struct binarytree *convertlinkedlisttobinarytree(struct linkedlist *head, struct binarytree *root){
	//base case
	if(head==NULL)
	{
		cout<<"Linked list is empty"<<endl;
		return root;
	}
	else
	{
		root=createbinarytree(head);
		queue<binarytree *>q;
		q.push(root);
		head=head->next;
		while(head){
			binarytree *parent=q.front();
			q.pop();
			struct binarytree *leftchild=NULL;
			struct binarytree *rightchild=NULL;
			leftchild=createbinarytree(head);
			q.push(leftchild);
			head=head->next;
			if(head){
				rightchild=createbinarytree(head);
				q.push(rightchild);
				head=head->next;
			}
			parent->left=leftchild;
			parent->right=rightchild;
		}
		return root;
	}
}

void inorder(struct binarytree *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	struct linkedlist *head=NULL;
	struct binarytree *root=NULL;
	int value;
	for(int i=0;i<n;i++){
		cin>>value;
	head=insert(head,value);
	}
	root=convertlinkedlisttobinarytree(head,root);
	if(root!=NULL)
	inorder(root);
	return 0;
}
