#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

int main() {
	// your code goes here
	struct node *head=NULL;
	struct node *p=NULL,*t=NULL;
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
	
	int value,counter=0,flag=0;
	cin>>value;
	p=head;
	
	while(p!=NULL ){
		counter++;
		if(p->data== value){
			flag=1;
			cout<<"Element found at "<<counter<<" position"<<endl;
			break;
		}
		p=p->next;
	}
	if(flag==0)
	cout<<"Element is not present in the linkedlist"<<endl;
	
	return 0;
}
