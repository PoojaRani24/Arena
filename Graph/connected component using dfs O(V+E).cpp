#include <bits/stdc++.h>
using namespace std;

void dfsutil(int index,bool visited[],vector<int>adj[]){
	visited[index]=true;
	cout<<index<<" ";
	for(auto i=adj[index].begin();i!=adj[index].end();i++){
		if(!visited[*i])
		dfsutil(*i,visited,adj);
	}
}

int main() {
	// your code goes here
	int v,e,u,w,count=0;
	cin>>v>>e;
	vector<int>adj[v];
	bool visited[v]={false};
	for(int i=0;i<e;i++){
		cin>>u>>w;
		adj[u].push_back(w);
		adj[w].push_back(u);
	}
	for(int i=0;i<v;i++){
		if(!visited[i]){
			count++;
			dfsutil(i,visited,adj);
			cout<<endl;
		}
	}
	cout<<"There are "<<count<<" components"<<endl;
	return 0;
}
