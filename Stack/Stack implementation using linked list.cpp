//Dynamic in size
//Complexity:O(1)
//push: push new node to the begining of the linkedlist

#include <iostream>
using namespace std;

struct stacknode{
	int data;
	struct stacknode *next;
};

struct stacknode* push(struct stacknode *top, int value){
	stacknode *temp=new stacknode();
	temp->data=value;
	temp->next=NULL;
	temp->next=top;
	top=temp;
	cout<<"pushed element "<<value<<" in stack"<<endl;
	return top;
}

struct stacknode* pop(struct stacknode *top){
	if(top==NULL){
		cout<<"No element to pop"<<endl;
	}
	else{
	stacknode *temp=top;
	cout<<temp->data<<" is popped from stack"<<endl;
	top=top->next;
	temp->next=NULL;
	free(temp);
}
return top;
}

void isempty(struct stacknode *top){
	if(top==NULL)
	cout<<"stack is empty"<<endl;
	else
	cout<<"stack is not empty"<<endl;
}

void peek(struct stacknode *top){
	if(top==NULL)
	cout<<"stack is empty"<<endl;
	else
	cout<<top->data<<endl;
}

int main() {
	// your code goes here
   struct stacknode *top=NULL;
	isempty(top);
	peek(top);
	top=push(top,10);
	isempty(top);
	peek(top);
	top=push(top,20);
	isempty(top);
	peek(top);
	top=pop(top);
	isempty(top);
	peek(top);
	top=push(top,30);
	isempty(top);
	peek(top);
	return 0;
}
