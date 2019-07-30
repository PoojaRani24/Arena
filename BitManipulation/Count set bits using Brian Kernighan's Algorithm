//Brian Kernighan's Algorithm
//Complexity: number of set bits in number
//n-1 toggles all the bits till the rightmost set bit in the number (including set bit)
//while loop runs for the number of set bits 

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,count=0;
	cin>>n;
	while(n!=0){
		count++;
		n= n&(n-1);
	}
	cout<<count<<endl;
	return 0;
}
