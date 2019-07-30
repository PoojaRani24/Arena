//N-Queen Problem, printing all the solutions

#include<bits/stdc++.h>

using namespace std;

void printsol(bool b[][100],int n){
	static int k=1;
	cout<<k<<":";
	cout<<endl;
	k++;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

bool is_safe(bool b[][100],int n,int x,int y){
	//check for row;
	for(int i=0;i<n;i++){
		if(b[x][i]==true)
		return false;
	}
	//check for column
	for(int i=0;i<n;i++){
		if(b[i][y]==true)
		return false;
	}
	//check for diagonal
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
	      if(b[i][j]==1 && ((i+j == x+y) || (i-j == x-y)))
	       return false;
	}
	}
	return true;
}

bool queen(bool b[][100],int n,int col){
	if(col==n){
		printsol(b,n);
		return true;
	}
		bool res=false;
		for(int i=0;i<n;i++){
		if(is_safe(b,n,i,col)){
			b[i][col]=1;
			res=(queen(b,n,col+1)||res);
			b[i][col]=0;
		}
	}
	return res;
}

int main(){
	int n;
	bool res;
	cin>>n;
    bool b[100][100];
    memset(b,0,sizeof(b));
   res= queen(b,n,0);
   if(res==false){
   	cout<<"NO"<<endl;
   }
}
