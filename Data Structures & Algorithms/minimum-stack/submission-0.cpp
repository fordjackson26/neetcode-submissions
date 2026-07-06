class MinStack {
    private:
     vector<int> stack;
public:
    MinStack() {
    }
    
    void push(int val) {
        stack.push_back(val);
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack[stack.size()-1];
    }
    
    int getMin() {
        int minVal = stack[0];
        for(int i = 1; i < stack.size(); i++){
            minVal = min(minVal, stack[i]);
        }
        return minVal;
        
    }
};
