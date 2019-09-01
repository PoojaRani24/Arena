int findLongestConseqSubseq(int arr[], int n)
{
    //Your code here
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int ans=0,j;
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)==s.end()){
             j=arr[i];
            while(s.find(j)!=s.end()){
                j++;
            }
         ans=max(ans,j-arr[i]);
        }
    }
    return ans;
}
