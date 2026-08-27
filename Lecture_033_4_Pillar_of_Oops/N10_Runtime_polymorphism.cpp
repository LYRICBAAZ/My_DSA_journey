#include<iostream>
using namespace std;

class Animal {
    public:
    virtual void print(){
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal{
    public:
    void print(){
        cout << "Barking" << endl;
    }
};

int main(){
    Animal * A;
    A = new Dog();

    A->print();
}