#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

int main() {
	// your code goes here
	struct node *head=NULL;
	struct node *fast=NULL, *slow=NULL, *t=NULL;
	int n;
	cin>>n;
	while(n--){
		int value;
		cin>>value;
		node *temp = new node;
		temp->data=value;
		temp->next=NULL;
		if(head==NULL){
			head=temp;
			t=temp;
		}
		else{
			t->next=temp;
			t=temp;
		}
	}
	
	fast=head;
	slow=head;
	
	while(fast!=NULL){
		fast=fast->next;
		if(fast==NULL)
		break;
		fast=fast->next;
		slow=slow->next;
	}
	
	cout<<slow->data<<endl;
	
	return 0;
}
