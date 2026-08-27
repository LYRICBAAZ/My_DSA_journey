#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;

    // Parameterised constructure
    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }

    void print(){
        cout << health << endl;
        cout << level << endl;
    }
};

int main(){

    Hero A(354,'Z');
    A.print();

    Hero B(333,'Y');
    B.print();

    A=B;
    A.print();
    B.print();
}