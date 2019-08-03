//if res>sum subtract starting element and make next element starting element and check again.
#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    long long int sum;
	    cin>>n>>sum;
	    long int a[n];
	    for(long int i=0;i<n;i++)
	        cin>>a[i];
	        
	    //brute force
	    long long int res=a[0];
	    long int i,start=0;
	    int flag=0;
	    for(i=1;i<=n;i++){
	       while(res>sum && start<i){
	           res=res-a[start];
	           start++;
	       }
	       if(sum==res){
	           flag=1;
	           break;
	       }
	       if(res<sum && i<n)
	       res=res+a[i];
	    }
	    if(flag==1)
	    cout<<start+1<<" "<<i<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
