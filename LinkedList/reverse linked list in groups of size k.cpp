#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

struct node* reverse(struct node *head,int k){
	struct node *current= head;
	struct node *prev=NULL, *next=NULL;
	int count=0;
	while(current!=NULL && count<k){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		count++;
	}
	if(next!=NULL)
	head->next=reverse(next,k);
	
	return prev;
}

int main() {
	// your code goes here
	struct node *head=NULL;
	struct node *last=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int value;
		cin>>value;
		node *temp= new node();
		temp->data=value;
		temp->next=NULL;
		//Insert at end
		if(head==NULL){
			head=temp;
			last=head;
		}
		else{
			last->next=temp;
			last=temp;
		}
	}
	int k;
	cin>>k;
	head=reverse(head,k);
	struct node *begin=head;
	while(begin!=NULL){
		cout<<begin->data<<" ";
		begin=begin->next;
	}
	return 0;
}
