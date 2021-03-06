/*
ALGO TYPE : GREEDY

Sample Input:
9 14
0 1 4
0 7 8
1 7 11
1 2 8
7 8 7
7 6 1
2 8 2
8 6 6
2 3 7
2 5 4
6 5 2
3 4 9
3 5 14
5 4 10
0        

Output:
distance of vertex 0 from sorce vertex is 0
distance of vertex 1 from sorce vertex is 4
distance of vertex 2 from sorce vertex is 12
distance of vertex 3 from sorce vertex is 19
distance of vertex 4 from sorce vertex is 21
distance of vertex 5 from sorce vertex is 11
distance of vertex 6 from sorce vertex is 9
distance of vertex 7 from sorce vertex is 8
distance of vertex 8 from sorce vertex is 14


*/




#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,e;
	cin>>n>>e;
	int dis[n],visited[n];
	for(int i=0;i<n;i++)
	  dis[i]=INT_MAX;
	memset(visited,0,sizeof(visited));
	vector<pair<int,int>>adj[n];
	multiset<pair<int,int>>s;
	int u,v,w;
	for(int i=0;i<e;i++){
		cin>>u>>v>>w;
		adj[u].push_back(make_pair(v,w));
	}
	int source;
	cin>>source;
	dis[source]=0;
	s.insert(make_pair(dis[source],source));
	while(!s.empty()){                            // For vertex
		pair<int,int>p=*s.begin();
		s.erase(s.begin());
		int dis_from_src=p.first;
		int ver_in_focus=p.second;
		if(visited[ver_in_focus]==1)
		 continue;
		else{
			visited[ver_in_focus]==1;
			for(int i=0;i<adj[ver_in_focus].size();i++){            //for each neighbour of a vertex
			 int nei_ver=adj[ver_in_focus][i].first;
			 int w=adj[ver_in_focus][i].second;
			 if(dis[nei_ver]>dis[ver_in_focus]+w){
			 	dis[nei_ver]=dis[ver_in_focus]+w;
			 	s.insert(make_pair(dis[nei_ver],nei_ver));
			 }
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<"distance of vertex "<<i<<" from sorce vertex is "<<dis[i]<<endl;
		
	}
	
	return 0;
}
