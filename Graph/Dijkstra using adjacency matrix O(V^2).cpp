void dijkstra(vector<vector<int>> graph, int src, int V)
{
    // Your code here
    bool visited[V]={false};
    int dis[V];
    for(int i=0;i<V;i++)
    dis[i]=INT_MAX;
    dis[src]=0;
    /*for(int i=0;i<V;i++)
    cout<<dis[i]<<" ";*/
    multiset<pair<int,int>>s;
    s.insert(make_pair(dis[src],src));
    while(!s.empty()){
        //cout<<"YO";
        pair<int,int> p=*s.begin();
        s.erase(s.begin());
        int distance=p.first;
        int vertex=p.second;
        if(!visited[vertex]){
            //cout<<"PO";
            visited[vertex]=true;
            for(int i=0;i<V;i++){
                if(graph[vertex][i]!=0){
                int neighbour=i;
                int edge_weight=graph[vertex][i];
                if(dis[neighbour]>(dis[vertex]+edge_weight)){
                    dis[neighbour]=(dis[vertex]+edge_weight);
                    s.insert(make_pair(dis[neighbour],neighbour));
                }
            }
            }
        }
    }
    for(int i=0;i<V;i++)
    cout<<dis[i]<<" ";
}
