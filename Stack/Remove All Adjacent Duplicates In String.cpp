class Solution {
public:
    string removeDuplicates(string S) {
        stack<char>s;
        for(int i=0;i<S.size();){
            if(s.size()==0)
                s.push(S[i++]);
            else if(s.top()==S[i]){
                s.pop();
                i++;
            }
            else
                s.push(S[i++]);
        }
        int len=s.size();
        string ans;
        for(int i=len-1;i>=0;i--){
           ans.insert(0,1,s.top());
            s.pop();
        }
        return ans;
    }
};
