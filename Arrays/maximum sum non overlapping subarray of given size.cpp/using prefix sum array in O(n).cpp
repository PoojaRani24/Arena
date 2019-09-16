#include <bits/stdc++.h>
using namespace std;

int getsum(int prefixsum[],int i,int j){
	if(i==0)
	return prefixsum[j];
	else
	return prefixsum[j]-prefixsum[i-1];
}

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int a[n],prefixsum[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	pair<int,int>index,secondsubarray;
	prefixsum[0]=a[0];
	for(int i=1;i<=n-k;i++)
	prefixsum[i]=prefixsum[i-1]+a[i];
	int maxsum;
    index=make_pair(n-(2*k),n-k);
    maxsum=getsum(prefixsum,n-(2*k),n-k-1)+getsum(prefixsum,n-k,n-1);
    secondsubarray=make_pair(n-k,getsum(prefixsum,n-k,n-1));
    for(int i=n-(2*k)-1;i>=0;i--){
    	int cur=getsum(prefixsum,i+k,i+(2*k)-1);
    	if(cur>secondsubarray.second){
    		secondsubarray=make_pair(i+k,cur);
    	}
    	cur=getsum(prefixsum,i,i+k-1)+secondsubarray.second;
    	if(cur>=maxsum){
    		maxsum=cur;
    		index=make_pair(i,secondsubarray.first);
    	}
    }
	for(int i=index.first;i<index.first+k;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	for(int i=index.second;i<index.second+k;i++)
	cout<<a[i]<<" ";
	return 0;
}
