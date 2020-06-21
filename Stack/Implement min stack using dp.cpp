class MinStack {
public:
    /** initialize your data structure here. */
    vector<int>stack,dp;
    MinStack() {
        
    }
    
    void push(int x) {
        stack.push_back(x);
        if(stack.size()==1){
            dp.push_back(x);
        }
        else{
            dp.push_back(min(dp[dp.size()-1],x));
        }
    }
    
    void pop() {
        stack.pop_back();
        dp.pop_back();
    }
    
    int top() {
        return stack[stack.size()-1];
    }
    
    int getMin() {
        return dp[dp.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
