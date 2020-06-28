class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++){
             sum=sum+nums[i];
             sum=max(sum,nums[i]);
            if(sum>ans)
                ans=sum;
        }
        return ans;
    }
};
