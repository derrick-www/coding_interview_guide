#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    void reverseStack(stack<int> &stackRev) {
        if (stackRev.empty()) {
            return;
        }
        int i = getAndRemoveLastElem(stackRev);
        reverseStack(stackRev);
        stackRev.push(i);
    }
private:
    int getAndRemoveLastElem(stack<int> &stackRev) {
        int i = stackRev.top();
        stackRev.pop();
        if (stackRev.empty()) {
            return i;
        } else {
            int last = getAndRemoveLastElem(stackRev);
            stackRev.push(i);
            return last;
        }
    }
};

int main() {
    Solution s;
    stack<int> stackRev;
    stackRev.push(1);
    stackRev.push(2);
    stackRev.push(3);
    s.reverseStack(stackRev);
    cout << stackRev.top() << endl;
    stackRev.pop();
    cout << stackRev.top() << endl;
    stackRev.pop();
    cout << stackRev.top() << endl;
    stackRev.pop();


}
