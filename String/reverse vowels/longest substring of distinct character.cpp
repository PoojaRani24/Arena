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
	    int i=0,max_len=0,start=0;
	    map<char,int>m;
	    for(int j=0;j<s.length();){
	        if(m.find(s[j])==m.end() || m[s[j]==0]){
	            m[s[j]]=1;
	            if(j-i+1>max_len){
	                max_len=j-i+1;
	                start=i;
	            }
	            j++;
	        }
	        else{
	            while(m[s[j]]!=0){
	                m[s[i]]--;
	                i++;
	            }
	            m[s[j]]=1;
	            if(j-i+1>max_len){
	                max_len=j-i+1;
	                start=i;
	            }
	            j++;
	        }
	    }
	    cout<<max_len<<endl;
	}
	return 0;
}
