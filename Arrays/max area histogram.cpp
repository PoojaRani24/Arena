#include<iostream>
#include<stack>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(long long int i=0;i<n;i++)
	    cin>>a[i];
	    long long int sum=0,ans=0;
	    stack<long long int>st;
	    long long int i;
	    for(i=0;i<n;i++){
	        if(st.empty())
	        st.push(i);
	        else{
	            if(a[i]>=a[st.top()])
	            st.push(i);
	            else{
	                while(!st.empty() && a[st.top()]>a[i]){
	                    long long int t=st.top();
	                    st.pop();
	                    if(!st.empty())
	                    sum=a[t]*(i-st.top()-1);
	                    else
	                    sum=a[t]*i;
	                    if(sum>ans)
	                    ans=sum;
	                }
	                st.push(i);
	            }
	        }
	    }
	    while(!st.empty()){
	        long long int t=st.top();
	        st.pop();
	        if(!st.empty())
	           sum=a[t]*(i-st.top()-1);
	        else
	           sum=a[t]*i;
	        if(sum>ans)
	           ans=sum;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
