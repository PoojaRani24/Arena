\\num is anumber of bits r where only bits in range (l,r) are set
\\ n=10101 l=2 r=4
\\num=1110
\\num ^n=11011
#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,l,r;
	    cin>>n>>l>>r;
	    int num=((1<<r)-1)^((1<<(l-1))-1);
	    cout<<num^n<<endl;
	}
	return 0;
}
