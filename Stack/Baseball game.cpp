class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>s;
        int sum=0;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                int p=s.top();
                s.pop();
                sum-=p;
            }
            else if(ops[i]=="D"){
                int a=s.top();
                a=2*a;
                s.push(a);
                sum+=a;
            }
            else if(ops[i]=="+"){
                int a,b;
                a=s.top();
                s.pop();
                b=s.top();
                b+=a;
                s.push(a);
                s.push(b);
                sum+=b;
            }
            else{
                s.push(stoi(ops[i]));
                sum+=stoi(ops[i]);
            }
        }
        return sum;
    }
};
