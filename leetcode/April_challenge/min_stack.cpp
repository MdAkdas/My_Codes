class MinStack {
public:
   
    vector<int> minS;
     vector<int> minElem;
    public:
    MinStack() {
        
    }
    
    void push(int x) {
        minS.push_back(x);
        if(minElem.empty()||minElem.back()>=x)
            minElem.push_back(x);
    }
    
    void pop() {
        if(minS.back()==minElem.back())
            minElem.pop_back();
        
        minS.pop_back();
    }
    
    int top() {
        if(!minS.empty())
        return minS.back();
        
        return -1;
    }
    
    int getMin() {
        if(!minElem.empty())
        return minElem.back();
        
        return -1;
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