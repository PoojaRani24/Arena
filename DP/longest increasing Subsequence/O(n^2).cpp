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
	    int a[n];
	    int f[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        f[i]=1;
	    }
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(a[j]<a[i])
	                f[i]=max(f[i],f[j]+1);
	        }
	    }
	    sort(f,f+n);
	    cout<<f[n-1]<<endl;
	}
	return 0;
}
