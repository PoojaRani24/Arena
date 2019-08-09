//SELECTION SORT:
// Maintains two arrays:
//sorted array and unsorted array in the main array
// find the smallest element in the unsorted array and push it to the front of unsorted array
//Complexity: O(n^2)
//Inplace: Does not use extra space
//swaps: O(n) for outter loop
//Not stable: because we swap instead of shift, so it might result in pushing 
//a key at a position greater than a key with same value
//can be made stable by shifting instead of swapping like insertion sort
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		int min_index;
	for(int i=0;i<n-1;i++){
		min_index=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_index])
			min_index=j;
		}
		//shift instaed of swapping to make it stable
		int key=a[min_index];
		while(min_index>i){
			a[min_index]=a[min_index-1];
			min_index--;
		}
		a[i]=key;
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
