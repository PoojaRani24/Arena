#include <iostream>
using namespace std;

struct compress{
	int parent;
	int rank;
};

int findgcd(int a,int b){
	if(b==0)
	return a;
	else
	return findgcd(b,(a%b));
}

int findset(struct compress track[],int i){
	if(track[i].parent!=i){
		track[i].parent=findset(track,track[i].parent);
	}
	return track[i].parent;
}

void unionset(struct compress track[],int i,int j){
	int xparent=findset(track,i);
	int yparent=findset(track,j);
	if(track[xparent].rank>track[yparent].rank)
		track[yparent].parent=xparent;
	else if(track[xparent].rank<track[yparent].rank)
	    track[xparent].parent=yparent;
	else
	    {
	    		track[yparent].parent=xparent;
	    		track[xparent].rank++;
	    }
}

int main() {
	// your code goes here
	int n,g;
	cin>>n>>g;
	struct compress track[n];
	for(int i=1;i<=n;i++){
		track[i].parent=i;
		track[i].rank=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int v=findgcd(i,j);
			if(v>=g){
			int xparent=findset(track,i);
			int yparent=findset(track,j);
			if(xparent!=yparent)
			unionset(track,i,j);
			}
		}
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int a,b;
		cin>>a>>b;
		if(findset(track,a)==findset(track,b))
		cout<<"yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	return 0;
}
