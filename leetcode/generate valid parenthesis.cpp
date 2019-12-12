class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string>res;
        int l=n,r=n,t=2*n;
        gen(l,r,t,s,res);
        return res;
    }
    
    void gen(int l,int r,int t,string s,vector<string> &res){
        if(s.length()==t){
            cout<<"final string "<<s<<endl;
            res.push_back(s);
            return;
        }
        if(l>0){
            s+='(';
            cout<<"left recursion "<<endl;
            cout<<s<<endl;
            cout<<"going for l= "<<l-1<<" r= "<<r<<endl;
            gen(l-1,r,t,s,res);
            s.pop_back();
        }
        if(l<r)
        {
            s+=')';
            cout<<"right recursion "<<endl;
            cout<<s<<endl;
            cout<<"going for l= "<<l<<" r= "<<r-1<<endl;
            gen(l,r-1,t,s,res);
        }
    }
};
