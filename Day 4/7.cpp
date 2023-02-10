#include <stack>
#include <iostream>
using namespace std;
void sortStack(stack<int> &s) {
 if (s.empty())
        return;
    int x = s.top();
    s.pop();
    sortStack(s);
    stack<int> tempStack;
    while (!s.empty() && s.top() > x) {
        tempStack.push(s.top());
        s.pop();
    }
    s.push(x);
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}
int main() {
    stack<int> s;
    s.push(5);
    s.push(1);
    s.push(2);
    s.push(6);
    s.push(4);
    sortStack(s);
    cout << "Sorted numbers are: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
   return 0;
}
