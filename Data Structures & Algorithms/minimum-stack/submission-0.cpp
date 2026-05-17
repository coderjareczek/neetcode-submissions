class MinStack {
    stack<int> m_s; // 1 1
    stack<int> s; // 1 2
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(!m_s.empty()) val = min(val, m_s.top());
        m_s.push(val);
    }
    
    void pop() {
        s.pop();
        m_s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return m_s.top();
    }
};
