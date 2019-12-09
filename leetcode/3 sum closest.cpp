class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=nums[0]+nums[1]+nums[2];
        int flag=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int l=0,r=nums.size()-1;
            while(l<r){
                int temp=nums[i]+nums[l]+nums[r];
                if(l==i)
                    l++;
                else if(r==i)
                    r--;
               else{
                   if(abs(temp-target)<abs(target-sum)){
                    sum=temp;
                }
                if(temp<target)
                    l++;
                else if(temp>target)
                    r--;
                   else {
                       flag=1;
                       break;
                   }
               } 
            }
            if(flag)
                break;
        }
        //cout<<sum<<endl;
        return sum;
    }
};
