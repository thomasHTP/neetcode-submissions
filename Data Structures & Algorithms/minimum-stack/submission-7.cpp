class MinStack {
public:
    stack<int> minStack;
    stack<int> allMins;
    MinStack() {
        
    }
    
    void push(int val) {
        if (allMins.empty() || val <= allMins.top()) {
            allMins.push(val);
        }
        minStack.push(val);
    }
    
    void pop() {
        if (allMins.top() == minStack.top()) {
            allMins.pop();
            minStack.pop();
        }
        else minStack.pop();
    }
    
    int top() {
        return minStack.top();
    }
    
    int getMin() {
        return allMins.top();
    }
};
