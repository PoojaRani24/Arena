#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    cin>>n;
	    long long int sum=0,count=0;
	    unordered_map<int,int>m;
	    long long int a[n];
	    for(long int i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	        if(sum==0)
	        count++;
	        if(m.find(sum)!=m.end()){
	            //zero sum array found
	            count+=m[sum];
	            m[sum]++;
	        }
	        else{
	            m[sum]=1;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
