//vector<int>g[n];
//Complexity; O(V+E)
void dfs(int s, vector<int> g[], bool vis[])
{
    // Your code here
    vis[s]=true;
    cout<<s<<" ";
    for(auto i=g[s].begin();i!=g[s].end();i++){
        if(!vis[*i])
        dfs(*i,g,vis);
    }
}
