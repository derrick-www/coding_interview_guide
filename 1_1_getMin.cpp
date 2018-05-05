//第一章：设计一个有getMin功能的栈
//1_1_getMin.cpp
#include <iostream>
#include <stack>
using namespace std;

class Solution {
    stack<int> stackPush;
    stack<int> stackMin;
public:
    void push(int elem) {
        stackPush.push(elem);
        if (stackMin.size() == 0) {
            stackMin.push(elem);
        } else {
            if (elem < stackMin.top()) {
                stackMin.push(elem);
            }
        }
    }

    int pop() {
        int val = stackPush.top();
        stackPush.pop();
        if (val == stackMin.top()) {
            stackMin.pop();
        }
        return val;
    }

    int getMin() {
        return stackMin.top();
    }
};

int main() {
    Solution s;
    s.push(5);
    s.push(1);
    s.push(3);
    int val = s.pop();
    cout << val << endl;
    cout << s.getMin() << endl;
    cout << s.pop() << endl;
    cout << s.getMin() << endl;
    return 0;
}
