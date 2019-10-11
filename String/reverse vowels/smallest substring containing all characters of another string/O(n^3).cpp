#include <bits/stdc++.h>
using namespace std;

int findlength(string s1,int f[]){
	//cout<<s1<<" ";
	//cout<<f[0]<<" "<<f[1]<<" "<<f[2]<<" "<<f[3]<<endl;
	for(int i=0;i<s1.length();i++){
		if(s1[i]>='a' && s1[i]<='z' && f[s1[i]-'a']>0)
		f[s1[i]-'a']--;
	}
	for(int i=0;i<26;i++){
		if(f[i]!=0)
		return INT_MAX;
	}
	//cout<<s1<<endl;
	return s1.length();
}

int main() {
	// your code goes here
	string s,s2,p;
	cin>>p;
	cin>>s;
	int freq[26]={0};
	int n=s.length();
	int min_len=INT_MAX;
	int temp,count=0;
	for(int i=0;i<p.length();i++){
		freq[p[i]-'a']++;
	
	}
	/*for(int i=0;i<26;i++){
		cout<<char('a'+i)<<" "<<freq[i]<<endl;
	}*/
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			string s1;
			for(int k=i;k<=j;k++){
				s1+=s[k];
			}
			//cout<<s1<<endl;
			int f[26]={0};
			for(int i=0;i<26;i++)
			f[i]=freq[i];
			temp=findlength(s1,f);
			if(temp<min_len){
				s2=s1;
				min_len=temp;
			}
		}
	}
	cout<<min_len<<" "<<s2<<endl;
	return 0;
}
