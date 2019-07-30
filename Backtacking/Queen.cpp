
//BACKTRACKING
//Brute force approach
//takes exponential time
//Used when we have to find all the possible combinations.

#include <bits/stdc++.h>
using namespace std;

bool is_safe(bool b[][100],int n,int x,int y){
	//check row
	for(int i=0;i<n;i++){
		if(b[x][i]==1)
		return false;
	}
	//check col
	for(int i=0;i<n;i++){
		if(b[i][y]==1)
		return false;
	}
	//check diagonal
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        if(b[i][j]==1 && ((i-j==x-y) || (i+j==x+y)))
	        return false;
	}
	}
	return true;
}

bool queen(bool b[][100],int n,int count){
	//all queens are placed
	if(count==0)
	return true;
	else{
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(is_safe(b,n,i,j)==true){
					b[i][j]=1;
					if(queen(b,n,count-1)== true)
					return true;
					else
					b[i][j]=0;
				}
				else{
					continue;
				}
			}
		}
	}
	return false;
}

int main() {
	// your code goes here
	int n,ans,count;
	cin>>n;
	count=n;
	bool b[n][100];
	memset(b,0,sizeof(b));
    ans=queen(b,n,count);
    if(ans==false)
    cout<<"NO"<<endl;
    else{
    	cout<<"YES"<<endl;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cout<<b[i][j]<<" ";
    		}
    		cout<<endl;
    	}
    }
	return 0;
}
