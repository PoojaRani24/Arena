#include <iostream>
using namespace std;

int SubsetSum(int a[],int n,int sum){
	//base condition;
	if(sum==0)
	return 1;
	else if(sum<0)
	return 0;
	else if(sum>0 && n<=0)
	return 0;
	else 
	return (SubsetSum(a,n-1,sum)||SubsetSum(a,n-1,sum-a[n-1]));
}

int main() {
	// your code goes here
	int n,sum;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>sum;
	if(SubsetSum(a,n,sum))
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
}
