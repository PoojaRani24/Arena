/*

Complexity: E + V

Sample Input:
9 14
0 1
0 7
1 7
1 2
7 8
7 6
2 8
8 6
2 3
2 5
6 5
3 4
3 5
5 4
2

Output:
2
1
8
3
5
0
7
6
4

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,e,u,v,src;
	cin>>n>>e;
	int visited[n];
	memset(visited,0,sizeof(visited));
	vector<int>adj[n];
	for(int i=0;i<e;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	cin>>src;
	queue<int>q;
	q.push(src);
	while(!q.empty()){
		int p=q.front();
		q.pop();
		cout<<p<<endl;
		visited[p]=1;
		for(int i=0;i<adj[p].size();i++){
			if(visited[adj[p][i]]==0){
				q.push(adj[p][i]);
				visited[adj[p][i]]=1;
			}
		}
	}
	return 0;
}
