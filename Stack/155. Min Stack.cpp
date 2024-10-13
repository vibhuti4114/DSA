//Time Complexity: O(1) for push,pop,topand getmin
//Space Complexity: O(n)

class MinStack {
public:
    stack<int> s;
    stack<int> m;
    MinStack() {
    }
    
    void push(int val) {
        if(m.empty() || val<=m.top()){
            m.push(val);
        }
        s.push(val);
        
    }
    
    void pop() {
        if(s.top()==m.top()){
            m.pop();
        }

        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return m.top();
    }
};
