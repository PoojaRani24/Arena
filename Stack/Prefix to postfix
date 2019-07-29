//for a-z A-Z add to new string
//for '(' push into stack
//for ')' pop from stack until '(' is found and discard both parenthesis
//for operator, if prec(s[i])>pre(st.top()), the push s[i] into stack 
//else pop and add to string untill prec(s[i])>pre(st.top()) and then push s[i] into stack

#include <iostream>
#include<stack>
using namespace std;

int pre(char p){
	if(p=='^')
	return 3;
	else if((p=='*')||(p=='/'))
	return 2;
    else if((p=='+')||(p=='-'))
	return 1;
	else
	return -1;
}

int main() {
	// your code goes here
	stack<char>st;
	string s,ns;
	cin>>s;
	int l=s.length();
	st.push('N');
	for(int i=0;i<l;i++){
		
		if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
		ns+=s[i];
		else if(s[i]=='(')
		st.push(s[i]);
		else if(s[i]==')'){
			while(st.top()!='N' && st.top()!='('){
				ns+=st.top();
				st.pop();
			}
			if(st.top()=='(')
			st.pop();
		}
		else{
			while(st.top()!='N' && pre(s[i])<=pre(st.top())){
				ns+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(st.top()!='N'){
		ns+=st.top();
		st.pop();
	}
	cout<<ns<<endl;
	return 0;
}
