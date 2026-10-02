#include <bits/stdc++.h>
using namespace std;

class SpecialStack {
    // Properties....
    stack<long long> s;
    long long mn;

public:
    // Constructor Call...
    SpecialStack() {
        mn = -1;
    }

    void push(int x) {
        if (s.empty()) {
            s.push(x);
            mn = x;
        }
        else if (x < mn) {
            s.push(2LL * x - mn);
            mn = x;
        }
        else {
            s.push(x);
        }
    }

    void pop() {
        if (s.empty())
            return;

        long long t = s.top();
        s.pop();

        if (t < mn) {
            mn = 2LL * mn - t;
        }

        if (s.empty())
            mn = -1;
    }

    int peek() {
        if (s.empty())
            return -1;

        if (s.top() < mn)
            return mn;

        return s.top();
    }

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
        if (s.empty())
            return -1;

        return mn;
    }
};

int main() {

    SpecialStack s;

    s.push(5);
    s.push(3);
    s.push(7);
    s.push(2);

    cout << "Minimum: " << s.getMin() << endl;
    cout << "Top: " << s.peek() << endl;

    s.pop();

    cout << "After pop:" << endl;
    cout << "Minimum: " << s.getMin() << endl;
    cout << "Top: " << s.peek() << endl;

    s.pop();
    s.pop();

    cout << "After more pops:" << endl;
    cout << "Minimum: " << s.getMin() << endl;
    cout << "Top: " << s.peek() << endl;

    return 0;
}