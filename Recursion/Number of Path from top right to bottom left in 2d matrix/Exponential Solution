//takes exponential time
//has overlapping subproblems
//we start from end point and recur to the top 

#include<iostream>
using namespace std;

int path(int m,int n){
    if(m==1 || n==1)
        return 1;
    else{
        return path(m-1,n)+path(m,n-1);
    }
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    cout<<path(m,n)<<endl;
	}
	return 0;
}
