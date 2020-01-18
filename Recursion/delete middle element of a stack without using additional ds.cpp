void recur(stack<int>&s,int sizeOfStack){
    //cout<<"this is "<<s.top()<<endl;
    int p=sizeOfStack;
    if(p%2!=0)
    p++;
    if(s.size()==(p/2)){
        //cout<<"only pop "<<s.top()<<endl;
    s.pop();}
    else{
        int temp=s.top();
        s.pop();
        //cout<<"first pop "<<temp<<endl;
        recur(s,sizeOfStack);
        s.push(temp);
        //cout<<"then push "<<temp<<endl;
    }
}

stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{
    //Your code here
    recur(s,sizeOfStack);
    return s;
}
