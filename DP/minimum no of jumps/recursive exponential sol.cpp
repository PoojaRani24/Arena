#include <bits/stdc++.h>
using namespace std;

int jump(int a[],int l,int h){
	//base condition
	if(l==h)
	return 0;
	if(a[l]==0)
	return INT_MAX;
	int max=INT_MAX;
	for(int i=l+1;i<=h && i<=l+a[l];i++){
		int j=jump(a,i,h);
		if(j!=INT_MAX && j+1<max)
		max=j+1;
	}
	return max;
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int res=jump(a,0,n-1);
	cout<<res;
	return 0;
}
