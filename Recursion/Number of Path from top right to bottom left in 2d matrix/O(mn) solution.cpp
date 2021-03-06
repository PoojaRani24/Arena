//takes O(mn) time
//O(mn) space
//base case: only one path to reach 0th row and 0th col
#include<iostream>
using namespace std;

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int dp[m][n];
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            if(i==0 || j==0)
	            dp[i][j]=1;
	        }
	    }
	    for(int i=1;i<m;i++){
	        for(int j=1;j<n;j++){
	            dp[i][j]=dp[i-1][j]+dp[i][j-1];
	        }
	    }
	    cout<<dp[m-1][n-1]<<endl;
	}
	return 0;
}
