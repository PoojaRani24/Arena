int strstr(string s, string x)
{
     //Your code here
     int m=s.length();
     int n=x.length();
     int a[n]={0};
     int j=0,i=1;
     while(i<n){
         if(x[i]==x[j]){
             a[i]=j+1;
             j++;
             i++;
         }
         else{
             if(j==0){
                 a[i]=0;
                 i++;
             }
             else{
                 j=a[j-1];
             }
         }
     }
     int flag=0;
     i=0,j=0;
     while(i<m){
         if(s[i]==x[j]){
             i++;
             j++;
             if(j==n){
                 flag=1;
                 break;
             }
         }
        else if(s[i]!=x[j] && j>0){
             j=a[j-1];
        }
        else if(s[i]!=x[j] && j==0){
            i++;
        }
     }
     if(flag==0)
     return -1;
     else 
     return i-n;
}
