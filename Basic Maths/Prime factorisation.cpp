#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int>v;
	int count=0;
	while(n%2 == 0){
		count++;
		v.push_back(2);
		n=n/2;
	}
	
	for(int i=3;i<=sqrt(n);i = i+2){
		while(n%i == 0){
			v.push_back(i);
			n=n/i;
		}
	}
	
	//prime number
	if(n>2)
	    v.push_back(n);
	    
	int l=v.size();
	for(int i=0;i<l;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}
