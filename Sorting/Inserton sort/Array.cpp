//Worst case: O(n^2) array sorted in reverse order, n(n+1)/2 -1 sshifts
//best case: O(n) array already sorted, no shifts
//Inplace , stable , online

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int i,j;
	for( i=1;i<n;i++){
		int key=a[i];
		for( j=i-1;j>=0;j--){
			if(a[j]>key)
				a[j+1]=a[j];
			else
			    break;
		}
		a[j+1]=key;
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
