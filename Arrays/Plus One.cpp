class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
     for(int i=digits.size()-1;i>=0;){
         if(digits[i]==9){
             digits[i]=0;
             i--;
         }
         else{
             carry=0;
             digits[i]++;
             break;
         }
     }  
        if(carry)
            digits.insert(digits.begin(),1);
        return digits;
    }
};
