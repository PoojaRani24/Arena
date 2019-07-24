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
	int num,index;
	cin>>num>>index;
	node *new_node=new node;
	new_node->data=num;
	new_node->next=NULL;
	struct node *ptr=head;
	for(int i=1;i<index-1;i++){
		ptr=ptr->next;
	}
	new_node->next=ptr->next;
	ptr->next=new_node;
	
	struct node *traverse=head;
	while(traverse!=NULL){
		cout<<traverse->data<<" ";
		traverse=traverse->next;
	}
	
	return 0;
}
