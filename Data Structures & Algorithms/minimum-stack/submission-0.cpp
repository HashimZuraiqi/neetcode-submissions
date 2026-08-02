class MinStack {
private:
    stack<int> min_st;
    stack<int> st;
public:
    MinStack() {

    }
    
    void push(int val) {
        st.push(val);

        if (min_st.empty() || val <= min_st.top()) {
            min_st.push(val);
        }
    }
    
    void pop() {
        if (st.top() == min_st.top()) {
            min_st.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};
