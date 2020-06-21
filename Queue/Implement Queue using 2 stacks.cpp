class MyQueue {
public:
    stack<int>s1,s2;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(s1.size()==0)
            s1.push(x);
        else{
            while(s1.size()!=0){
                int p=s1.top();
                s2.push(p);
                s1.pop();
            }
            s1.push(x);
            while(s2.size()!=0){
                int p=s2.top();
                s1.push(p);
                s2.pop();
            }
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int q=s1.top();
        s1.pop();
        return q;
    }
    
    /** Get the front element. */
    int peek() {
        int q=s1.top();
        return q;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (s1.size()==0 && s2.size()==0);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
