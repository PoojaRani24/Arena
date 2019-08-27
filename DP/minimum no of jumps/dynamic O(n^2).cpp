#include <bits/stdc++.h>
using namespace std;

int jump(int a[],int n )
{
	//base condition
	if(a[0]==0 || n==0)
	return -1;
	int jump[n];
	jump[0]=0;
	for(int i=1;i<n;i++)
	jump[i]=INT_MAX;
	for(int i=1;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(i<=j+a[j] && jump[i]>jump[j]+1)
			jump[i]=jump[j]+1;
		}
	}
//	for(int i=0;i<n;i++)
//	cout<<jump[i]<<" ";
	return jump[n-1];
}

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int res=jump(a,n);
	cout<<res;
	return 0;
}
