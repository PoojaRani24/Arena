#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	vector<pair<int,int>>v;
	for(int i=0;i<=n-k;i++){
		int sum=0;
		for(int j=i;j<i+k;j++){
			sum+=a[j];
		}
		v.push_back(make_pair(sum,i));
	}
	sort(v.begin(),v.end(),greater<pair<int,int>>());
	for(int i=v[0].second;i<v[0].second+k;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	for(int i=v[1].second;i<v[1].second+k;i++)
	cout<<a[i]<<" ";
	return 0;
}
