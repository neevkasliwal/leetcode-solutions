class MinStack {
    private:
    stack<long long> s;
    long long min;
    

public:
    MinStack() {
        
    }
    
    void push(int x) {
       if(s.empty()){
         min = x;
        s.push(x);
       }
       else if(x<=min){
        s.push(2LL*x-min);
        min = x;
       }
       else{
        s.push(x);
       }
    }
    int top() {
        long long t = s.top();
        return (t<=min) ? min:t;
        
    }
    
    void pop() {
        long long t = s.top();
        s.pop();
        if(t<=min){
            
            min = 2*min - t;
            
        }
        
        
    }
    
    
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */