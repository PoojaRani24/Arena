class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        stack<int>s;
        for(int i=0;i<nums2.size();i++){
            if(s.size()==0)
                s.push(nums2[i]);
            else{
                while(!s.empty() && nums2[i]>s.top()){
                    int p=s.top();
                    m[p]=nums2[i];
                    s.pop();
                }
                s.push(nums2[i]);
            }
        }
        while(s.size()!=0){
            int p=s.top();
            m[p]=-1;
            s.pop();
        }
        vector<int>ans(nums1.size());
        for(int i=0;i<nums1.size();i++){
            // if(m.find(nums1[i])==m.end())
            //     ans[i]=-1;
            // else
                ans[i]=m[nums1[i]];
        }
        return ans;
    }
};
