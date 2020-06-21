class Solution {
public:
    string util(string q){
        string ans="";
        for(int i=0;i<q.length();i++){
            if(ans.length()==0 && q[i]=='#')
                continue;
            else if(q[i]>='a' && q[i]<='z')
                ans.push_back(q[i]);
            else
                ans.pop_back(); 
        }
        cout<<ans<<endl;
        return ans;
    }
    
    bool backspaceCompare(string S, string T) {
        return (util(S)==util(T));
    }
};
