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
	struct node *del=head,*prev=head;;
	int key;
	cin>>key;
	int flag=0,count=0;
	while(del!=NULL ){
		count++;
		if(del->data==key){
			flag=1;
			prev->next=del->next;
			del->next=NULL;
			free(del);
			del=NULL;
			cout<<"key "<<key<<" found at index position "<<count<<endl;
			cout<<"key "<<key<<" is deleted"<<endl;
			break;
		}
		else{
			prev=del;
			del=del->next;
		}
	}
	
	if(flag==0)
	cout<<"key does not exist in the given linked list"<<endl;
	
	struct node *traverse=head;
	while(traverse!=NULL){
		cout<<traverse->data<<" ";
		traverse=traverse->next;
	}
	
	return 0;
}
