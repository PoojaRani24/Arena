#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct compress{
	int parent;
	int rank;
};

int find(struct compress track[],int x){
	if(track[x].parent!=x)
	track[x].parent=find(track,track[x].parent);
	return track[x].parent;
}

void unionset(struct compress track[],int xset,int yset){
	int xparent=find(track,xset);
	int yparent=find(track,yset);
	if(track[xparent].rank<track[yparent].rank)
	track[xparent].parent=yparent;
	else if(track[xparent].rank>track[yparent].rank)
	track[yparent].parent=xparent;
	else{
		track[yparent].parent=xparent;
		track[xparent].rank++;
	}
}

bool checkforcycle(struct compress track[],vector<pair<int,int>>v){
	for(int i=0;i<v.size();i++){
		int x=v[i].first;
		int y=v[i].second;
		int xset=find(track,x);
		int yset=find(track,y);
		if(xset==yset)
		return true;
		else
		unionset(track,xset,yset);
	}
	return false;
}

int main() {
	// your code goes here
	int v,e;
	cin>>v>>e;
	struct compress track[v];
    for(int i=0;i<v;i++){
    	track[i].parent=i;
    	track[i].rank=0;
    }
	int u,w;
	vector<pair<int,int>>p;
	for(int i=0;i<e;i++){
		cin>>u>>w;
		p.push_back(make_pair(u,w));
	}
	
	if(checkforcycle(track,p))
	cout<<"there is cycle"<<endl;
	else
	cout<<"there is no cycle";
	return 0;
}
