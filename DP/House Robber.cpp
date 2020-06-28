class Solution {
public:
    int rob(vector<int>& nums) {
        int ans=0;
        if(nums.size()==0)
            ans=0;
        else if(nums.size()==1)
            ans=nums[0];
        else if(nums.size()==2)
            ans=max(nums[0],nums[1]);
        else{
            int dp[nums.size()];
            dp[0]=nums[0];
            dp[1]=max(nums[1],nums[0]);
            for(int i=2;i<nums.size();i++){
                dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
            }
         ans=dp[nums.size()-1];
        }
        return ans;
    }
};
