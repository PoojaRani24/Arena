//takes O(mn) time
//base case: only one path to reach 0th row and 0th col
//space O(n)
#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int dp[n];
	    for(int i=0;i<n;i++)
	    dp[i]=1;
	    for(int i=1;i<m;i++){
	        for(int j=1;j<n;j++){
	            dp[j]+=dp[j-1];
	        }
	    }
	    cout<<dp[n-1]<<endl;
	}
	return 0;
}
