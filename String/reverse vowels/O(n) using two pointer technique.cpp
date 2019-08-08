//start traversing array from both end 
//if vowels not found at l index, l++ and continue, don't check for r
//if vowel found at l. l++, check for r
//if vowel not found for r, r--, continue
//if vowel found for r, swap character at position at l and r, increment l and decrement r
#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string a;
	    cin>>a;
	    int l=0,r=a.length()-1;
	    while(l<r){
	        if((a[l]!='a') && (a[l]!='e') && (a[l]!='i') && (a[l]!='o') && (a[l]!='u')){
	            l++;
	            continue;
	        }
	         if((a[r]!='a') && (a[r]!='e') && (a[r]!='i') && (a[r]!='o') && (a[r]!='u')){
	            r--;
	            continue;
	        }
	        char temp=a[l];
	        a[l]=a[r];
	        a[r]=temp;
	        l++;
	        r--;
	    }
	    cout<<a<<endl;
	    }
	
	return 0;
}
