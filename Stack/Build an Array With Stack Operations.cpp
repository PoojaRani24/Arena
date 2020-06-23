class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int freq[1001]={0};
        for(int i=0;i<target.size();i++)
            freq[target[i]]=1;
        for(int i=1;i<=target[target.size()-1];i++){
            if(freq[i]==1)
                ans.push_back("Push");
             else{
                 ans.push_back("Push");
                ans.push_back("Pop");
        }
        }
        return ans;
    }
};
