bool dfsutil(int index,vector<int>adj[],int vis[],int recstack[]){
    if(!visited[index]){
    visited[index]=true;
    recstack[index]=true;
    }
    for(auto i=adj[index].begin();i!=adj[index].end();i++){
        if(!visited[*i] && dfsutil(*i,adj,vis,recstack))
        return true;
        else if(recstack[*i])
        return true;
    }
    recstack[index]=false;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    bool visited[V]={false};
    bool recstack[V]={false};
    for(int i=0;i<V;i++){
        if(dfsutil(i,adj,visited,rescstack))
        return 1;
    }
    return 0;
}
