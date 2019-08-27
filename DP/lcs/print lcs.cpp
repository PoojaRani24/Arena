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
	    string s1,s2;
	    cin>>s1;
	    cin>>s2;
	    int dp[m+1][n+1];
	    for(int i=0;i<=m;i++){
	        for(int j=0;j<=n;j++){
	            if(i==0 || j==0)
	            dp[i][j]=0;
	            else if(s1[i-1]==s2[j-1])
	            dp[i][j]=1+dp[i-1][j-1];
	            else
	            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    cout<<dp[m][n]<<endl;
	    char s3[dp[m][n]+1];
	    s3[dp[m][n]]='\0';
	    int i=m,j=n,index=dp[m][n];
	    while(i>0 && j>0){
	    	if(s1[i-1]==s2[j-1])
	    	{   
	    		s3[index-1]=s1[i-1];
	    		i--;
	    		j--;
	    		index--;
	    	}
	    	else{
	    		if(dp[i-1][j]>dp[j-1][i])
	    		i--;
	    		else
	    		j--;
	    	}
	    }
	    cout<<s3<<endl;
	}
	return 0;
}
