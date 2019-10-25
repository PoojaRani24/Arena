#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int ans=0;
	    for(int i=0;i<s.length();i++){
	        //cout<<"po "<<i<<endl;
	        int lsum=0,rsum=0;
	        int l=i;
	        int r=i+1;
	        while(l>=0 && r<s.length()){
	            lsum+=s[l]-'0';
	            rsum+=s[r]-'0';
	           // cout<<lsum<<" "<<rsum<<endl;
	            if(lsum==rsum)
	            ans=max(ans,r-l+1);
	            //cout<<ans<<endl;
	            l--;
	            r++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
