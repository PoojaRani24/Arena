#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,sum;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>sum;
	int dp[n+1][sum+1];
	for(int i=0;i<=n;i++)
	dp[i][0]=1;
	for(int i=1;i<=sum;i++)
	dp[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(j<a[i-1])
			dp[i][j]=dp[i-1][j]; //exclude it
			else
			dp[i][j]=dp[i-1][j] || dp[i-1][j-a[i-1]];
		}
	}
	cout<<dp[n][sum];
	return 0;
}
