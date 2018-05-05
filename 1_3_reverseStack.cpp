//由两个栈组成的队列
#include <iostream>
#include <stack>
using namespace std;

class Solution {
    stack<int> stackPush;
    stack<int> stackPop;
public:
    void push(int elem) {
        stackPush.push(elem);
    }

    void pop() {
        if (stackPush.empty() && stackPop.empty()) {

        } else if (stackPop.empty()) {
            while (!stackPush.empty()) {
                int temp = stackPush.top();
                stackPush.pop();
                stackPop.push(temp);
            }
        }
        stackPop.pop();
    }

    int front() {
        if (stackPush.empty() && stackPop.empty()) {

        } else if (stackPop.empty()) {
            while (!stackPush.empty()) {
                int temp = stackPush.top();
                stackPush.pop();
                stackPop.push(temp);
            }
        }
        return stackPop.top();
    }
};

int main() {
    Solution s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "s.front()" << s.front() << endl;
    s.pop();
    cout << "s.front()" << s.front() << endl;
    s.pop();
    cout << "s.front()" << s.front() << endl;
    s.pop();

}

