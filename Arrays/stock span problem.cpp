#include<iostream>
#include<stack>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int s[n];
	    s[0]=1;
	    stack<int>st;
	    st.push(0);
	    for(int i=0;i<n;i++){
	        if(a[st.top()]>a[i])
	        {
	            s[i]=i-st.top();
	            st.push(i);
	        }
	        else{
	            while(!st.empty() && a[st.top()]<=a[i]){
	                st.pop();
	            }
	            if(st.empty())
	            s[i]=i+1;
	            else
	            s[i]=i-st.top();
	            st.push(i);
	        }
	    }
	    for(int i=0;i<n;i++)
	    cout<<s[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
