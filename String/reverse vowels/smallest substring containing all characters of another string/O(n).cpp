#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count=0,start=0,start_index=-1,min_len=INT_MAX;
	string p,s;
	cin>>p>>s;
	int f1[26]={0};
	int f2[26]={0};
	for(int i=0;i<p.length();i++)
	f1[p[i]-'a']++;
	for(int i=0;i<s.length();i++){
		f2[s[i]-'a']++;
		if(f1[s[i]-'a']!=0 && f2[s[i]-'a']<=f1[s[i]-'a'])
		count++;
		if(count==p.length()){
			while(f1[s[start]-'a']==0 || f2[s[start]-'a']>f1[s[start]-'a']){
				if(f2[s[start]-'a']>f1[s[start]-'a']){
					f2[s[start]-'a']--;
					start++;
				}
			}
			int temp=i-start+1;
			if(temp<min_len){
				min_len=temp;
				start_index=start;
			}
		}
	}
	cout<<min_len<<" "<<s.substr(start_index,min_len)<<endl;
	return 0;
}
