//ALL RECURSION BASED LEVEL ORDER TRAVERSAL HAVE WORST CASE COMPLEXITY OF O(N^2).
//WHEN TREE IS SKEWED ON ONE SIDE.

#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left=NULL;
	struct Node *right=NULL;
};

struct Node *createbinarytree(int a[],int n,int index,struct Node *root){
	if(index<n){
		Node *temp=new Node();
		temp->data=a[index];
		temp->left=NULL;
		temp->right=NULL;
		root=temp;
		root->left=createbinarytree(a,n,(2*index)+1,root->left);
		root->right=createbinarytree(a,n,(2*index)+2,root->right);
	}
	return root;
}

void inorder(struct Node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

int height(struct Node *root){
    if(root==NULL)
    return 0;
    int ls,rs;
    ls=height(root->left);
    rs=height(root->right);
    if(ls>rs)
    return ls+1;
    else
    return rs+1;
}

void spiralorder(struct Node *root,int level,bool itr){
    if(root==NULL)
    return;
    if(level==1)
    cout<<root->data<<" ";
    else if(level>1){
        if(itr){
            spiralorder(root->left,level-1,itr);
            spiralorder(root->right,level-1,itr);
        }
        else{
            spiralorder(root->right,level-1,itr);
            spiralorder(root->left,level-1,itr);
        }
    }
}

void printSpiral(Node *root)
{
    int h;
    h=height(root);
    bool itr=false;
    for(int i=1;i<=h;i++){
    spiralorder(root,i,itr);
    itr=!itr;
    }
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	struct Node *root=NULL;
	root=createbinarytree(a,n,0,root);
	//inorder(root);
	printSpiral(root);
	return 0;
}
