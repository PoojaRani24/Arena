#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=1<<10;j=j<<1){
	            if(i&j)
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
