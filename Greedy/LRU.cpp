#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,capacity,fault=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cin>>capacity;
	    unordered_set<int>s;
	    unordered_map<int,int>index;
	    for(int i=0;i<n;i++){
	        if(s.size()<capacity){
	            if(s.find(a[i])==s.end()){
	                fault++;
	                s.insert(a[i]);
	            }
	            index[a[i]]=i;
	        }
	        else{
	            if(s.find(a[i])==s.end()){
	               fault++;
	               int lru_index=INT_MAX,value;
	               for(auto j=s.begin();j!=s.end();j++){
	                   if(index[*j]<lru_index){
	                       lru_index=index[*j];
	                       value=*j;
	                   }
	               }
	               s.erase(value);
	               s.insert(a[i]);
	            }
	            index[a[i]]=i;
	        }
	    }
	    cout<<fault<<endl;
	}
	return 0;
}
