//Maximum of all subarrays of size K
//Using Deque
//Complexity:O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        deque<int>d;
        int i=0;
        for( i=0;i<k;i++){
            while(!d.empty() && a[i]>=a[d.back()])
            d.pop_back();
            d.push_back(i);
        }
        for(;i<n;i++){
            cout<<a[d.front()]<<" ";
            while(!d.empty() && d.front()<=i-k)
            d.pop_front();
            while(!d.empty() && a[i]>=a[d.back()])
            d.pop_back();
            d.push_back(i);
        }
        cout<<a[d.front()]<<endl;
    } 
    return 0;
}
