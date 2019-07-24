#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

int main() {
	// your code goes here
	struct node *head=NULL;
	int n,value;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>value;
		struct node *t;
		node *temp=new node;
		temp->data=value;
		temp->next=NULL;
	    if(head==NULL)
	    	head=temp;
	    else{
	    	temp->next=head;
	    	head=temp;
	    }
	}
	if(head==NULL)
	cout<<"There are no nodes"<<endl;
	else{
		struct node *ptr=head;
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
		cout<<endl;
	}
	return 0;
}
