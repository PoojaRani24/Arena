//pros: Easy to implement and maintain
//cons: static in size, we can not shrink or enlarge the array at runtime.
//Complexity: O(1) for push, pop, peek, isempty

#include <iostream>
using namespace std;

#define MAX 1000

class Stack{
	int top;
	public:
	int a[MAX];
	Stack(){
		top=-1;
	}
	int pop();
	bool push(int x);
	bool isempty();
	int peek();
	
};
	
	bool Stack::push(int x){
		if(top>=(MAX-1))
		{
			cout<<"Overflow"<<endl;
			return 0;
		}
	     a[++top]=x;
	     cout<<x <<" is pushed"<<endl;
	     return 1;
	}
	int Stack::pop(){
		if(top<0){
			cout<<"Underflow"<<endl;
	        return 0;
		}
		int p=a[top--];
		cout<<p<<" is popped"<<endl;
		return p;
	}
	int Stack::peek(){
		if(top<0){
			cout<<"There is no element in the stack"<<endl;
			return 0;
		}
		cout<<a[top]<<" is the top element"<<endl;
		return a[top];
	}
	
	bool Stack::isempty(){
		if(top<0){
			cout<<"Stack is Empty"<<endl;
			return 1;
		}
		cout<<"Not Empty"<<endl;
		return 0;
	}

int main() {
	// your code goes here
	class Stack s;
	s.isempty();
	s.push(10);
	s.push(20);
	s.isempty();
	s.peek();
	s.pop();
	s.peek();
	return 0;
}
