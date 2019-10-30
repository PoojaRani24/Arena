#include <bits/stdc++.h>
using namespace std;
// recursively remove adjacent duplicates in string
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	string s, p;
	cin>>s;
	stack<char>st;
	char top='0', element, last_removed;
	st.push(top);
	for(int i=0;i<s.length();i++){
		top=st.top();
		element=s[i];
		//cout<<"top is "<<top<<" element is "<<element<<endl;
		if(top=='0'){
		st.push(element);
			//cout<<"pushing "<<element<<endl;
			}
		else if(top==element){
			last_removed=top;
			st.pop();
			//cout<<"pop "<<top<<endl;
		}
		else if(last_removed==element)
		continue;
		else
		st.push(element);
	}
	while(!st.empty()){
		p+=st.top();
		st.pop();
	}
	//cout<<p<<endl;
	string f;
	if(p=="0")
	f="Empty String";
	else{
	for(int i=p.length()-2;i>=0;i--)
	f+=p[i];
	}
	cout<<f<<endl;
}
	return 0;
}
/*9
geeksforgeeg
azxxxzy
caaabbbaac
gghhg
aaaacddddcappp
aaaaaaaaaaaaaa
qpaaaaadaaaadprq
acaaaabbbacddddd
acbbcddc
*/
