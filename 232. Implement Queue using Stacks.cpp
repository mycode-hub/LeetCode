class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        // O(1) push
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int x;
        if( !s2.empty())
        {
            x = s2.top();
            s2.pop();
            return x;
        }
        else
        {
            while( !s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            x = s2.top();
            s2.pop();
        }
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        if( !s2.empty())
            return s2.top();
        while( !s1.empty() )
        {
            s2.push(s1.top());
            s1.pop();
        }
        return s2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if( s1.empty() && s2.empty())
            return true;
        return false;
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
