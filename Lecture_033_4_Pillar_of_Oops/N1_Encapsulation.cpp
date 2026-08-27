#include<iostream>
using namespace std;

class Student {
private:
    int marks;   // hidden data

public:
    // setter
    void setMarks(int m) {
        marks = m;
    }

    // getter
    int getMarks() {
        return marks;
    }
};

int main() {
    Student s;
    s.setMarks(90);          // controlled access
    cout << s.getMarks();    // output: 90
}