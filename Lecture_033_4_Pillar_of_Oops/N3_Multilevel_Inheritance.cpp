#include<iostream>
using namespace std;

// Base Class
class Person {
public:
    string name;
    int age;

    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class 1
class Employee : public Person {
public:
    int salary;

    void setEmployee(int s) {
        salary = s;
    }

    void showEmployee() {
        cout << "Salary: " << salary << endl;
    }
};

// Derived Class 2 (Multilevel)
class Manager : public Employee {
public:
    int teamSize;

    void setManager(int t) {
        teamSize = t;
    }

    void showManager() {
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    Manager m;

    // Base class ka function
    m.setPerson("Shubham", 22);

    // Derived class ka function
    m.setEmployee(50000);

    // Most derived class ka function
    m.setManager(5);

    // Output
    m.showPerson();
    m.showEmployee();
    m.showManager();

    return 0;
}