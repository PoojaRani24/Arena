//recursive sol: 3^n exponential in nature;
//fun(n-1)+fun(n-2)+fun(n-3);

//Dp sol:O(n);
#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n+1];
	    a[0]=1;
	    a[1]=1;
	    a[2]=2;
	    for(int i=3;i<=n;i++)
	    a[i]=a[i-1]+a[i-2]+a[i-3];
	    cout<<a[n]<<endl;
	}
	return 0;
}
