//dfs 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,e;
	cin>>n>>e;
	vector<int>adj[n];
	while(e--){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int x,y;
	cin>>x>>y;
	stack<int>s;
	int visited[n]={0};
	s.push(x);
	visited[x]=1;
	int flag=0;
	while(!s.empty()){
		int temp=s.top();
		s.pop();
		for(int i=0;i<adj[temp].size();i++){
			if(!visited[adj[temp][i]] &&  adj[temp][i]!=y){
				s.push(adj[temp][i]);
				visited[adj[temp][i]]=1;
			}
			else if(!visited[adj[temp][i]] &&  adj[temp][i]==y){
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	cout<<"path found"<<endl;
	else
	cout<<"path not found"<<endl;
	return 0;
}
