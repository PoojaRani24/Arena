class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int>q1,q2;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        int q1_size=q1.size();
        int q2_size=q2.size();
        if((q1_size==0 && q2_size==0) || (q1_size!=0 && q2_size==0))
            q1.push(x);
        else
            q2.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(q1.size()==0 && q2.size()!=0){
            while(q2.size()!=1){
                int p=q2.front();
                q1.push(p);
                q2.pop();
            }
            int q=q2.front();
            q2.pop();
            return q;
        }
        else{
            while(q1.size()!=1){
                int p=q1.front();
                q2.push(p);
                q1.pop();
            }
            int q=q1.front();
            q1.pop();
            return q;
        }
    }
    
    /** Get the top element. */
    int top() {
         if(q1.size()==0 && q2.size()!=0){
            while(q2.size()!=1){
                int p=q2.front();
                q1.push(p);
                q2.pop();
            }
             int q=q2.front();
             q2.pop();
             q1.push(q);
            return q;
        }
        else{
            while(q1.size()!=1){
                int p=q1.front();
                q2.push(p);
                q1.pop();
            }
            int q=q1.front();
            q1.pop();
            q2.push(q);
            return q;
        }
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
       return (q1.size()==0 && q2.size()==0);
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
