#include<iostream>
using namespace std;

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m;
	    int a[m];
	    for(int i=0;i<m;i++)
	    cin>>a[i];
	    cin>>n;
	    int dp[n+1][m];
	    for(int i=0;i<m;i++)
	    dp[0][i]=1;
	    for(int i=1;i<=n;i++){
	        for(int j=0;j<m;j++){
	            //Sm is part of the solution
	            int x=(i-a[j]>=0)?dp[i-a[j]][j]:0;
	            //Sm is not a part of the solution
	            int y=(j>=1)?dp[i][j-1]:0;
	            dp[i][j]=x+y;
	            //cout<<dp[i][j]<<" ";
	        }
	    }
	    cout<<dp[n][m-1]<<endl;
	}
	return 0;
}
