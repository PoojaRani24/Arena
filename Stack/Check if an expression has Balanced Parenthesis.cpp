//Complexity: O(n)
#include <iostream>
#include <stack>
using namespace std;

int main() {
	// your code goes here
	
	string s;
	cin>>s;
	stack<char>st;
	for(int i=0;i<s.length();i++){
		if(s[i]!='(' && s[i]!=')' && s[i]!='{' && s[i]!='}' && s[i]!='[' && s[i]!=']' )
		continue;
		else if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		st.push(s[i]);
		else{
			//closing braces
			if(s[i]==')' ){
				if(st.top()!= '('){
				//cout<<"Unbalanced"<<endl;
				break;
			  }
			  st.pop();
			}
			else if(s[i]=='}' ){
				if(st.top()!= '{'){
				//cout<<"Unbalanced"<<endl;
				break;
			  }
			  st.pop();
			}
			else if(s[i]==']' ){
				if(st.top()!= '['){
				//cout<<"Unbalanced"<<endl;
				break;
			  }
			  st.pop();
			}
		}
	}
	if(st.empty())
	cout<<"Balanced"<<endl;
	else
	cout<<"Unbalanced"<<endl;
	return 0;
}
