//int 2D array takes too much space and can cause stack overflow. 
//Always use bool 2D array;

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    if(sum%2!=0)
	    cout<<"NO"<<endl;
	    else{
	    sum=sum/2;
	    bool dp[n+1][sum+1];
	    for(int i=0;i<=n;i++)
	    dp[i][0]=1;
	    for(int i=1;i<=sum;i++)
	    dp[0][i]=0;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            if(j<a[i-1])
	            dp[i][j]=dp[i-1][j];
	            else
	            dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
	        }
	    }
	    if(dp[n][sum])
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    }
	}
	return 0;
}
