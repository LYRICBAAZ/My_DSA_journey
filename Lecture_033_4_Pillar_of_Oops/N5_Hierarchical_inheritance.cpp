#include<iostream>
using namespace std;

// Base Class
class Person {
public:
    string name;

    void setName(string n) {
        name = n;
    }
};

// Derived Class 1
class Student : public Person {
public:
    int rollNo;

    void setRoll(int r) {
        rollNo = r;
    }

    void displayStudent() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived Class 2
class Teacher : public Person {
public:
    string subject;

    void setSubject(string s) {
        subject = s;
    }

    void displayTeacher() {
        cout << "Teacher Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    s.setName("Shubham");
    s.setRoll(101);
    s.displayStudent();

    cout << endl;

    Teacher t;
    t.setName("Aman");
    t.setSubject("Math");
    t.displayTeacher();

    return 0;
}