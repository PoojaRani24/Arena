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
	    	{
	    		head=temp;
	    		t=temp;
	    	}
	    else{
	    	t->next=temp;
	    	t=temp;
	    }
	}

//reverse linkedlist
   struct node *current=head,*middle=head,*prev=NULL;
   while(current!=NULL){
   	middle=current->next;
   	current->next=prev;
   	prev=current;
   	current=middle;
   }
    head=prev;
    
	struct node *traverse=head;
	while(traverse!=NULL){
		cout<<traverse->data<<" ";
		traverse=traverse->next;
	}
	
	return 0;
}
