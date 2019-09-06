#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int find(int parent[],int x){
	if(parent[x]==-1)
	return x;
	else 
	return find(parent,parent[x]);
}

void unionset(int parent[],int xset,int yset){
	int xparent=find(parent,xset);
	int yparent=find(parent,yset);
	if(xparent!=yparent)
	parent[xparent]=yparent;
}

bool checkforcycle(int parent[],vector<pair<int,int>>v){
	for(int i=0;i<v.size();i++){
		int x=v[i].first;
		int y=v[i].second;
		int xset=find(parent,x);
		int yset=find(parent,y);
		if(xset==yset)
		return true;
		else
		unionset(parent,xset,yset);
	}
	return false;
}

int main() {
	// your code goes here
	int v,e;
	cin>>v>>e;
	int parent[v];
	memset(parent,-1,sizeof(parent));
	int u,w;
	vector<pair<int,int>>p;
	for(int i=0;i<e;i++){
		cin>>u>>w;
		p.push_back(make_pair(u,w));
	}
	if(checkforcycle(parent,p))
	cout<<"there is cycle"<<endl;
	else
	cout<<"there is no cycle";
	return 0;
}
