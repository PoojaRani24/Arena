class Solution {
public:
    string simplifyPath(string path) {
        stack<string>s;
        vector<int>v;
                string ans;
        for(int i=0;i<path.length();i++){
            if(path[i]=='/')
                v.push_back(i);
        }
        for(int i=0;i<v.size()-1;i++){
            int start=v[i]+1;
            int end=v[i+1]-1;
            string temp="";
            for(int j=start;j<=end;j++){
                temp+=path[j];
            }
            if(temp=="")
                continue;
            else if(temp!=".." && temp!="."){
               // cout<<"for index : "<<start<<" "<<end<<" "<<"push -> "<<temp<<" ";
                s.push(temp);
            }
            else{
                if(s.size()!=0 && temp==".."){
                 // cout<<"pop -> "<<s.top()<<" "   ;
                 s.pop();
                }
            }
        }
        int start=v[v.size()-1];
        int end=path.length()-1;
        string temp;
        if(start+2==end){
            temp+=path[start+1];
            temp+=path[start+2];
        if(!s.empty() && temp==".."){
           // cout<<"pop -> "<<s.top()<<" "   ;
            s.pop();
        }
        else if(temp!=".." && temp!=" ")
                // cout<<"Q for index : "<<start<<" "<<end<<" "<<"push -> "<<temp<<" ";
                s.push(temp);
        }
       else {
            for(int i=start+1;i<=end;i++)
                temp+=path[i];
           if(temp!="/" && temp!="." && temp!=""){
            // cout<<"P for index : "<<start<<" "<<end<<" "<<"push -> "<<temp<<" ";
           s.push(temp);
           }
        }
        
        stack<string>s1;
        while(!s.empty()){
            s1.push(s.top());
            s.pop();
        }
        ans+="/";
        while(!s1.empty()){
           // cout<<s.top()<<" ";
            ans+=s1.top();
            if(s1.size()>1)
            ans+="/";
            s1.pop();
        }
        //ans.pop();
        // string p="";
        //     return p;
       return ans;
    }
};
