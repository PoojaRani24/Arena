#include<bits/stdc++.h>
using namespace std;

long long int merge(long int a[],long int temp[],long int l,long int mid,long int r){
    long long int count=0;
    int i,j,k;
    i=l;
    j=mid;
    k=l;
    //cout<<"po "<<" "<<i<<" "<<j-1<<" "<<j<<" "<<r<<" "<<endl;
    while((i<=mid-1) && (j<=r)){
        if(a[i]<=a[j])
        temp[k++]=a[i++];
        else{
            //cout<<"entered"<<endl;
            temp[k++]=a[j++];
            count+=(mid-i);
        }
    }
    while(i<=mid-1)
    temp[k++]=a[i++];
    while(j<=r)
    temp[k++]=a[j++];
    for(long int i=l;i<=r;i++)
    a[i]=temp[i];
    //cout<<count<<endl;
    return count;
}

long long int mergesort(long int a[],long int temp[],long int l,long int r){
long long int count=0;
if(r>l){
    long int mid=(l+r)/2;
    count=mergesort(a,temp,l,mid);
    count+=mergesort(a,temp,mid+1,r);
    count+=merge(a,temp,l,mid+1,r);
} 
//cout<<"mo "<<count<<" "<<l<<" "<<r<<" "<<endl;
return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long int a[n],temp[n];
        for(long int i=0;i<n;i++)
        cin>>a[i];
        for(long int i=0;i<n;i++)
        temp[i]=a[i];
        /*for(long int i=0;i<n;i++)
        cout<<temp[i]<<" ";
        cout<<endl;*/
        cout<<mergesort(a,temp,0,n-1)<<endl;
        //for(long int i=0;i<n;i++)
        //cout<<temp[i]<<" ";
    }
}
