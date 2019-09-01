bool issafe(int i,int j,int row,int col,vector<int>a[]){
    if(i>=0 && i<row && j>=0 && j<col)
    return true;
    else
    return false;
}

void dfsutil(int i,int j,int row,int col,vector<int>a[],bool visited[][50]){
    visited[i][j]=true;
    int rows[8]={-1,-1,-1,0,0,1,1,1};
    int cols[8]={-1,0,1,-1,1,-1,0,1};
    for(int p=0;p<8;p++){
        for(int q=0;q<8;q++){
            if(issafe(i+rows[p],j+cols[q],row,col,a) && a[i+rows[p]][j+cols[q]] && (!visited[i+rows[p]][j+cols[q]]))
            dfsutil(i+rows[p],j+cols[q],row,col,a,visited);
        }
    }
}

int findIslands(vector<int> a[], int n, int m)
{
    // Your code here
    bool visited[n][50];
    memset(visited,false,sizeof(visited));
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] && !visited[i][j]){
                count++;
            dfsutil(i,j,n,m,a,visited);
            }
        }
    }
    return count;
}
