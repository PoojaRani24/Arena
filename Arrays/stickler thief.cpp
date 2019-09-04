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
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int excl=0,incl=a[0],excl_new=0;
	    for(int i=1;i<n;i++){
	        excl_new=max(excl,incl);
	        incl=excl+a[i];
	        excl=excl_new;
	    }
	    cout<<max(excl,incl)<<endl;
	}
	return 0;
}
