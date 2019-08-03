//Worst case O(n^2)
//Run for each subset 

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    long int n;
	    long long int sum;
	    cin>>n>>sum;
	    long int a[n];
	    for(long int i=0;i<n;i++)
	        cin>>a[i];
	        
	    //brute force
	    long long int res=0;
	    long int i, j;
	    int flag=0;
	    for(i=0;i<n;i++){
	        res=0;
	        for(j=i;j<n;j++){
	            res+=a[j];
	            if(res==sum){
	                flag=1;
	                break;
	            }
	            if(res>sum)
	                break;
	        }
	        if(flag==1)
	        break;
	    }
	    if(flag==1)
	    cout<<i+1<<" "<<j+1<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
