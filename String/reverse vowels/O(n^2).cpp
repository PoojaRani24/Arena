//Store index position of vowels in first loop
//Loop again to reverse vowels
#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int p=0;
	    int a[s.length()]={0};
	    for(int i=0;i<s.length();i++){
	        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
	        a[p]=i;
	        p++;
	        }
	    }
	    //for(int i=0;i<p;i++)
	    //cout<<a[i]<<" ";
	    //cout<<endl;
	    //cout<<p<<endl;
	    if(p>1){
	        int l=0,r=p-1;
	       for(int i=0;i<(p/2);i++){
	           char temp=s[a[l]];
	           s[a[l]]=s[a[r]];
	           s[a[r]]=temp;
	           l++;
	           r--;
	       } 
	    }
	    cout<<s<<endl;
	}
	return 0;
}
