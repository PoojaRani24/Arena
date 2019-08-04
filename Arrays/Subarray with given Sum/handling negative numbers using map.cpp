//Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	unordered_map<int,int>m;
	int n,sum,flag=0;
	cin>>n>>sum;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
		int cur_sum=0;
	for(int i=0;i<n;i++){
		cur_sum+=a[i];
		//base condition when subarray with given sum starts from index 0
		if(cur_sum==sum){
		cout<<"0 "<<i<<endl;
		flag=1;
		break;}
		
		//if cur_sum- sum is present in map , we have found the end point of subarray with required sum
		//start = m[cur_sum-sum]+1
		//end= i;
		if(m.find(cur_sum-sum)!=m.end()){
		cout<<m[cur_sum-sum]+1<<" "<<i<<endl;
		flag=1;
		break;}
		
		//push cur_sum in the map
		else
		m[cur_sum]=i;
	}
    if(flag==0)
    cout<<"-1"<<endl;
    return 0;
}
