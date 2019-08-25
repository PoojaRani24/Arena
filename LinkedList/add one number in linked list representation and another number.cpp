#include <iostream>
using namespace std;
struct node {
	int data;
	node *next;
};

node *rev(node* head){
	node *current=head, *prev=NULL, *next=NULL;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	return head;
}

node *addnumbers(node *head,int num){
	head=rev(head);
	node *first=head,*fin=NULL;
	int carry=0;
	while(first || num){
		int sum=((first)?first->data:0 )+((num)?num%10:0 )+ (carry);
		carry=sum/10;
		sum=sum%10;
		node *temp=new node();
		temp->data=sum;
		temp->next=NULL;
		if(fin==NULL)
		fin=temp;
		else{
			temp->next=fin;
			fin=temp;
		}
		if(first)
		first=first->next;
		if(num)
		num=num/10;
	}
	if(carry){
		node *temp=new node();
		temp->data=carry;
		temp->next=fin;
		fin=temp;
	}
	return fin;
}

void printsum(node *head){
	node *current=head;
	while(current){
		cout<<current->data<<" ";
		current=current->next;
	}
}

int main() {
	// your code goes here
	node *head=NULL,*last=NULL;
	int n,num;
	cin>>n;
	while(n){
		node *temp=new node();
		temp->data=n%10;
		temp->next=NULL;
		if(head==NULL){
			head=temp;
		}
		else{
			temp->next=head;
			head=temp;
		}
		n=n/10;
	}
	cin>>num;
	//printsum(head);
	head=addnumbers(head,num);
	printsum(head);
	return 0;
}
