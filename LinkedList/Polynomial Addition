#include <bits/stdc++.h>
using namespace std;

struct node{
	int coefficient;
	int exponent;
	struct node *next;
};

int main() {
	// add two polynomials
	struct node *head1=NULL, *head2=NULL, *t=NULL , *head3=NULL;
	int n1,n2,coef,expo;
	cin>>n;
	
	//1st LinkedList
	for(int i=0;i<n1;i++){
		cin>>coef>>expo;
		node *temp=new node;
		temp->coefficient=coef;
		temp->exponent=expo;
		temp->next=NULL;
		if(head1==NULL){
			head1=temp;
			t=temp;
		}
		else{
			t->next=temp;
			t=temp;
		}
	}
	
	//2nd LinkedList
		for(int i=0;i<n2;i++){
		cin>>coef>>expo;
		node *temp=new node;
		temp->coefficient=coef;
		temp->exponent=expo;
		temp->next=NULL;
		if(head2==NULL){
			head2=temp;
			t=temp;
		}
		else{
			t->next=temp;
			t=temp;
		}
	}
	
	if(head1==NULL && head2==NULL)
	cout<<"Both LinkedList are empty"<<endl;
	else if(head1==NULL){
		//Traversing 2nd linkedList
      traverse=head2;
	while(traverse!=NULL){
		cout<<traverse->coefficient<<" ";
		traverse=traverse->next;
	}
		cout<<endl;
	}
	else if(head2==NULL){
		//Traversing 1st linkedlist
	struct node *traverse=head1;
	while(traverse!=NULL){
		cout<<traverse->coefficient<<" ";
		traverse=traverse->next;
	}
		cout<<endl;
	}
	else{
		struct node *ptr1=head1, *ptr2=head2, *t=NULL;
		while(ptr1!=NULL && ptr2!=NULL){
			node *tem=new node;
			tem->next=NULL;
			if(ptr1->exponent > ptr2->exponent){
				tem->exponent=ptr1->exponent;
				tem->coefficient=ptr1->coefficient;
				ptr1=ptr1->next;
			}
			else if(ptr1->exponent < ptr2->exponent){
				tem->exponent=ptr2->exponent;
				tem->coefficient=ptr2->coefficient;
					ptr2=ptr2->next;
			}
			else{
				tem->exponent=ptr1->exponent;
				tem->coefficient=(ptr1->coefficient + ptr2->coefficient);
					ptr1=ptr1->next;
					ptr2=ptr2->next;
			}
			if(head3==NULL){
				head3=tem;
				p=tem;
			}
			else{
				p->next=temp;
				p=tem;
			}
		}
		
	}
	
	traverse=NULL;
	while(traverse!=NULL){
		cout<<traverse->coefficient<<"x^"<<traverse->exponent<<" ";
	}
	return 0;
}
