#include <bits/stdc++.h>
using namespace std;

class twoStacks {
    int arr[100];
    int size = 100;
    int top1, top2;

public:
    twoStacks() {
        top1 = -1;
        top2 = 100;
    }

    void push1(int x) {
        if (top1 + 1 == top2) {
            cout << "Stack Overflow\n";
            return;
        }

        top1++;
        arr[top1] = x;
    }

    void push2(int x) {
        if (top1 + 1 == top2) {
            cout << "Stack Overflow\n";
            return;
        }

        top2--;
        arr[top2] = x;
    }

    int pop1() {
        if (top1 == -1)
            return -1;

        int x = arr[top1];
        top1--;
        return x;
    }

    int pop2() {
        if (top2 == 100)
            return -1;

        int x = arr[top2];
        top2++;
        return x;
    }
};

int main() {

    twoStacks s;

    // Stack 1
    s.push1(10);
    s.push1(20);
    s.push1(30);

    // Stack 2
    s.push2(100);
    s.push2(200);
    s.push2(300);

    cout << "Stack 1 pop: " << s.pop1() << endl;
    cout << "Stack 1 pop: " << s.pop1() << endl;

    cout << "Stack 2 pop: " << s.pop2() << endl;
    cout << "Stack 2 pop: " << s.pop2() << endl;

    return 0;
}