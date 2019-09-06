#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int s[n],f[n];
	    for(int i=0;i<n;i++)
	    cin>>s[i];
	    for(int i=0;i<n;i++)
	    cin>>f[i];
	    vector<pair<int,pair<int,int>>>v;
	    for(int i=0;i<n;i++)
	        v.push_back(make_pair(f[i],make_pair(s[i],i+1)));
	    sort(v.begin(),v.end());
	    int start=v[0].second.first;
	    int end=v[0].first;
	    cout<<v[0].second.second<<" ";
	    for(int i=1;i<n;i++){
	        if(v[i].second.first>=end)
	        {cout<<v[i].second.second<<" ";
	        end=v[i].first;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
