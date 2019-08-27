#include<bits/stdc++.h>
using namespace std;

int jump(int a[],int n){
	if(n==0 || a[0]==0)
	return -1;
	int max_reach=a[0];
	int steps=a[0];
	int jump=1;
	for(int i=1;i<n;i++){
		max_reach=max(max_reach,i+a[i]);
		steps--;
		if(steps==0){
			jump++;
			if(i>=max_reach)
			return -1;
			steps=max_reach-i;
		}
	}
	return jump;
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
