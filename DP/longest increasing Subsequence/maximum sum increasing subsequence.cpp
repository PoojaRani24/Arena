#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],sum[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum[i]=a[i];
	    }
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(a[j]<a[i])
	                sum[i]=max(sum[i],sum[j]+a[i]);
	        }
	    }
	    sort(sum,sum+n);
	    cout<<sum[n-1]<<endl;
	}
	return 0;
}
