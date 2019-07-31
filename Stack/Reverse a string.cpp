#include <iostream>
#include<stack>
using namespace std;

int main() {
	// your code goes here
	stack<char>st;
	string s,ns;
	cin>>s;
	st.push('N');
	for(int i=0;i<s.length();i++){
		st.push(s[i]);
	}
	while(st.top()!='N'){
		ns+=st.top();
		st.pop();
	}
	cout<<ns<<endl;
	return 0;
}
