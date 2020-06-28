class NumArray {
public:
    vector<int>prefixarray;
    NumArray(vector<int>& nums) {
        if(nums.size()==0)
            return;
        int ans[nums.size()];
        ans[0]=nums[0];
        prefixarray.push_back(ans[0]);
        for(int i=1;i<nums.size();i++){
            ans[i]=ans[i-1]+nums[i];
            prefixarray.push_back(ans[i]);
        }
    }
    
    int sumRange(int i, int j) {
        if(i==0)
            return prefixarray[j];
        else
            return prefixarray[j]-prefixarray[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
