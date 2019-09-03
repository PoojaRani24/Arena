/*
difference of odd set bits and even set bits should be multiple of 3
pow(2,1)= 3*1-1;
pow(2,2)= 3*1+1;
pow(2,3)= 3*3-1;
pow(2,4)= 3*5+1;
so only these +1 and -1 contibute to divisibility
*/
#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	int l=s.length();
	int even=0,odd=0;
	for(int i=0;i<l;i++){
	    if(i%2==0 && s[i]=='1')
	    even++;
	    if(i%2!=0 && s[i]=='1')
	    odd++;
	}
	if((abs(odd-even))%3==0)
	cout<<1<<endl;
	else 
	cout<<0<<endl;
 }
 return 0;
}
