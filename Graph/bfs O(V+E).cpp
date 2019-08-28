void bfsutil(queue<int>q,vector<int>adj[],bool vis[]){
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        cout<<temp<<" ";
        for(auto i=adj[temp].begin();i!=adj[temp].end();i++){
            if(!vis[*i]){
             vis[*i]=true;
            q.push(*i);
            }
        }
    }
}

void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    // Your code here
    queue<int>q;
    q.push(s);
    vis[s]=true;
    bfsutil(q,adj,vis);
}
