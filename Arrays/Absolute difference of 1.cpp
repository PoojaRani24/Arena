#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    long int n,count=0;
	    long long int k,temp;
	    cin>>n>>k;
	    long long int arr[n];
	    for(long int i=0;i<n;i++)
	        cin>>arr[i];
	     int dig=0,a,b,flag=1;
	    for(long int i=0;i<n;i++){
	        if(arr[i]<k){
	            dig=0,flag=1;
	            temp=arr[i];
	            while(temp!=0){
	                dig++;
	                a=temp%10;
	                if(dig>1){
	                  if(abs(b-a)!=1){
	                  flag=0;
	                  break;}
	                }
	                b=a;
	                temp=temp/10;
	            }
	            if(dig!=1 && flag!=0){
	                count++;
	            cout<<arr[i]<<" ";
	            }
	        }
	    }
	    if(count==0)
	    cout<<"-1";
	    cout<<endl;
	}
	return 0;
}
