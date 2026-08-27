#include<iostream>
using namespace std;

class Animal{
    public:
    void print(){
        cout << "MEawwww" << endl;
    }
};

class Human : public Animal {
    public:
    void print(){
        cout << "Speaking" << endl;
    }
};

int main(){
    Human A;
    A.print();
}