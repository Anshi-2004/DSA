// min stack
#include <iostream>
#include <stack>
using namespace std;
class MinStack {
   public:
    /** initialize your data structure here. */
    stack<int> s;
    stack<int> minS;
    MinStack() {}

    void push(int x) {
        s.push(x);
        if (minS.empty() || x <= minS.top()) {
            minS.push(x);
        }
    }

    void pop() {
        if (s.top() == minS.top()) {
            minS.pop();
        }
        s.pop();
    }

    int top() { return s.top(); }

    int getMin() { return minS.top(); }
};  

int main() {
    MinStack* obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    cout << obj->getMin() << endl; // return -3
    obj->pop();
    cout << obj->top() << endl;    // return 0
    cout << obj->getMin() << endl; // return -2
    return 0;
}   