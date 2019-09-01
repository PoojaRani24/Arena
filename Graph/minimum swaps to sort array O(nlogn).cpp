int minSwaps(int A[], int n){
    /*Your code here */
    pair<int,int> p[n];
    for(int i=0;i<n;i++){
        p[i].first=A[i];
        p[i].second=i;
    }
    int ans=0;
    sort(p,p+n);
    bool visited[n]={false};
    for(int i=0;i<n;i++){
        if(visited[i] || p[i].second==i)
        continue;
        int j=i;
        int cycle_size=0;
        while(!visited[j]){
            visited[j]=true;
            cycle_size++;
            j=p[i].second;
        }
        if(cycle_size>0)
        ans+=cycle_size-1;
    }
    return ans;
}
