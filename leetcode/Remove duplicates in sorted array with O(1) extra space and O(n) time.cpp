class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int prev=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev)
                nums[i]=INT_MAX;
            else{
                prev=nums[i];
                count++;
            }
        }
        cout<<"unique number "<<count<<endl;
        if(count==nums.size())
            return count;
        int i=1;
        for(int j=2;j<nums.size() && i<j;){
            if(nums[i]==INT_MAX && nums[j]!=INT_MAX ){
                cout<<"here"<<endl;
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
                j++;
            }
            else if(nums[i]!=INT_MAX && nums[j]==INT_MAX)
            {
                i++;
                j++;
            }
            else if(nums[i]!=INT_MAX && nums[j]!=INT_MAX)
            {
                i++;
                j++;
            }
            else if(nums[i]==INT_MAX && nums[j]==INT_MAX)
                j++;
        }
        for(int i=0;i<nums.size();i++)
            cout<<nums[i]<<" ";
        cout<<endl;
        return count;
    }
};
