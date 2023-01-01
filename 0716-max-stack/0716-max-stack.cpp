class MaxStack {
 private:
    set<pair<int,int>>stack;
    set<pair<int,int>>maxStack;
    int cnt = 0;
public:
    MaxStack() {
        
    }
    
    void push(int x) {
        stack.insert({cnt,x});
        maxStack.insert({x,cnt});
        cnt++;
    }
    
    int pop() {
        auto [idx, val] = *stack.rbegin();
        stack.erase({idx,val});
        maxStack.erase({val,idx});
        return val;
    }
    
    int top() {
        auto [idx, val] = *stack.rbegin();
        return val;
    }
    
    int peekMax() {
        auto [val, idx] = *maxStack.rbegin();
        return val;
    }
    
    int popMax() {
        auto [val, idx] = *maxStack.rbegin();
        stack.erase({idx, val});
        maxStack.erase({val, idx});
        return val;
    }
};

/**
 * Your MaxStack object will be instantiated and called as such:
 * MaxStack* obj = new MaxStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->peekMax();
 * int param_5 = obj->popMax();
 */