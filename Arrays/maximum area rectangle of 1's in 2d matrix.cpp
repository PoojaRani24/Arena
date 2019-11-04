int histogram(int a[],int m){
    int ans=INT_MIN,sum=INT_MIN;
    stack<int>st;
    int i=0;
    for( i=0;i<m;i++){
        if(st.empty())
        st.push(i);
        else{
            if(a[i]>=a[st.top()])
            st.push(i);
            else{
                while(!st.empty() && a[i]<a[st.top()]){
                    int t=st.top();
                    st.pop();
                    if(st.empty())
                    sum=a[t]*i;
                    else
                    sum=a[t]*(i-st.top()-1);
                    if(sum>ans)
                    ans=sum;
                }
                st.push(i);
            }
        }
    }
    while(!st.empty()){
        int t=st.top();
                    st.pop();
                    if(st.empty())
                    sum=a[t]*i;
                    else
                    sum=a[t]*(i-st.top()-1);
                    if(sum>ans)
                    ans=sum;
    }
    return ans;
}

int maxArea(int M[MAX][MAX],int n,int m)
{
    //Your code here
    int a[m];
    int sum=INT_MIN,ans=INT_MIN;
    ans=histogram(M[0],m);
    //cout<<ans<<endl;
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j])
            M[i][j]+=M[i-1][j];}
            sum=histogram(M[i],m);
            //cout<<sum<<endl;
            if(sum>ans)
            ans=sum;
    }
    return ans;
}
