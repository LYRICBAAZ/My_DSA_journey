#include<iostream>
using namespace std;

// Base Class 1
class Teacher {
public:
    string subject;

    void setSubject(string s) {
        subject = s;
    }
};

// Base Class 2
class Student {
public:
    int rollNo;

    void setRoll(int r) {
        rollNo = r;
    }
};

// Derived Class
class School : public Teacher, public Student {
public:
    string name;

    void setName(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    School s;

    s.setName("Shubham");
    s.setRoll(101);
    s.setSubject("Math");

    s.display();

    return 0;
}