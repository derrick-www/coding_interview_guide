#include <iostream>
#include <stack>
using namespace std;

void sortStackByStack(stack<int> &sta) {
    stack<int> helpStack;
    while (!sta.empty()) {
        int temp = sta.top();
        sta.pop();
        while (!helpStack.empty() && temp > helpStack.top()) {
            int t = helpStack.top();
            helpStack.pop();
            sta.push(t);
        }
        helpStack.push(temp);
    }

    while (!helpStack.empty()) {
        int temp = helpStack.top();
        helpStack.pop();
        sta.push(temp);
    }
}

int main() {
    stack<int> sta;
    sta.push(1);
    sta.push(3);
    sta.push(6);
    sta.push(4);
    sortStackByStack(sta);
    cout << sta.top() << endl;
    sta.pop();
    cout << sta.top() << endl;
    sta.pop();
    cout << sta.top() << endl;
    sta.pop();
    cout << sta.top() << endl;
    sta.pop();

}
