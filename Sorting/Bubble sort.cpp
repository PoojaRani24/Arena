//Bubble SORT:
//performs n-1 pass in outter loop
//inner loop performs swaps from 0- n-(i+1)-1
//In each pass, perform swaps for adjacent elemets if they are in incorrect order
// bubbles maximum element in each pass

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
    for(int i=0;i<n-1;i++){
    	bool swap=false;
    	for(int j=0;j<n-(i+1);j++){
    		if(a[j]>a[j+1]){
    			swap=true;
    			a[j]=a[j]+a[j+1];
    			a[j+1]=a[j]-a[j+1];
    			a[j]=a[j]-a[j+1];    	
    			}
    	}
    	//array is sorted as no swaps takes place
    	if(swap==false)
    	break;
    }
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
