#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n,count=0;
	    cin>>m>>n;
	    //exor of m and n
	    int num=m^n;
	    //both function gives the position of first rightmost set bit
	    //cout<<ffs(num)<<endl;
	    cout<<log2(num & -num) + 1<<endl;
	}
	return 0;
}
