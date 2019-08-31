bool dfsutil(int index,vector<int>adj[],bool visited[],int parent){
    visited[index]=true;
    for(auto i=adj[index].begin();i!=adj[index].end();i++){
        if(!visited[*i]){
            if(dfsutil(*i,adj,visited,index))
            return true;
        }
        else if(*i!=parent)
        return true;
    }
    return false;
}

bool isCyclic(vector<int> adj[], int V)
{
   // Your code here
   bool visited[V]={false};
   for(int i=0;i<V;i++){
       if(!visited[i]){
           if(dfsutil(i,adj,visited,-1))
           return 1;
       }
   }
   return 0;
}
