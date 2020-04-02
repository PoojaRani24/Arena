class Solution {
public:
    bool isHappy(int n) {
       //  set<int>s;
       //  int flag=0;
       // // cout<<n<<" --> ";
       //  while(true){
       //      n=digitSum(n);
       //      // cout<<n<<" --> ";
       //      if(n==1)
       //      {
       //          flag=1;
       //          break;
       //      }   
       //      else{
       //          if(s.find(n)!=s.end()){
       //              //sum is repeated --> not a happy number
       //              flag=0;
       //              break;
       //          }
       //          else{
       //              //sum is not repeated --> insert in set
       //              s.insert(n);
       //          }
       //      }
       //  }
       //  if(flag==1)
       //      return true;
       //  else 
       //      return false;
        
        int slow,fast;
        slow=n;
        fast=n;
     while(true){
         slow=digitSum(slow);
         fast=digitSum(digitSum(fast));
         if(slow==fast){
             break;
         }
     }
        if(slow==1)
            return true;
        return false;
    }
    
    int digitSum(int n){
        // cout<<"bro "<<n<<endl;
        int sum=0;
        while(n){
            sum+=(n%10)*(n%10);
            // cout<<"this is sum "<<sum<<endl;
            n=n/10;
        }
        return sum;
    }
};
