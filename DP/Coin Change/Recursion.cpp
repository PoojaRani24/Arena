#include<iostream>
using namespace std;

int coin(int a[],int m,int n){
    //base condition
    if(n==0)
    return 1;
    else if(n<0)
    return 0;
    else if(m<=0 && n>0)
    return 0;
    else
    return (coin(a,m-1,n)+coin(a,m,n-a[m-1]));
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m;
	    int a[m];
	    for(int i=0;i<m;i++)
	    cin>>a[i];
	    cin>>n;
	    int res=0;
	    res=coin(a,m,n);
	    cout<<res<<endl;
	}
	return 0;
}
