//there are n! permutations of string
#include<iostream>
using namespace std;

void permute(string a,int l,int r){
    if(l==r)
    cout<<a<<" ";
    else{
        for(int i=l;i<=r;i++){
            //swap
            swap(a[i],a[l]);
            //recurse to next layer
            permute(a,l+1,r);
            //backtracking
            swap(a[i],a[l]);
        }
    }
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.length();
	    permute(s,0,n-1);
	    cout<<endl;
	}
	return 0;
}
