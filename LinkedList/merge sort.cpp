#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

void split(node *head, node **a,node **b){
	node *slow=head, *fast=head->next;
	while(fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			fast=fast->next;
			slow=slow->next;
		}
	}
	*a=head;
	*b=slow->next;
	slow->next=NULL;
}

node *sortedmerge(node *a,node *b){
	node *res=NULL;
	if(a==NULL)
	return b;
	if(b==NULL)
	return a;
	if(a->data<=b->data)
	{
		res=a;
		res->next=sortedmerge(a->next,b);
	}
	else{
		res=b;
		res->next=sortedmerge(a,b->next);
	}
	return res;
}

void mergesort(node **head){
	node *start=*head, *a=NULL, *b=NULL;
	//base condition: when to stop partitioning
	if(start==NULL || start->next==NULL)
	return;
	split(start,&a,&b);
	mergesort(&a);
	mergesort(&b);
	*head=sortedmerge(a,b);
}

void push(node **head,int value){
	node *temp=new node();
	temp->data=value;
	temp->next=*head;
	*head=temp;
}

void print(node *head){
	node *current=head;
	while(current!=NULL){
		cout<<current->data<<" ";
		current=current->next;
	}
}

int main() {
	// your code goes here
	int n,value;
	cin>>n;
	node *head=NULL;
	for(int i=0;i<n;i++){
		cin>>value;
		push(&head,value);
	}
	print(head);
	cout<<endl;
	mergesort(&head);
		print(head);
	return 0;
}
