#include<iostream>
using namespace std;
class Hero {

    private:
    int health = 5;
    char level = 'a';

    public:

    void print(){
        cout << level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int a){
        health = a;     
    }
};

int main(){
    Hero shubham;
    cout << shubham.getHealth()<< endl;
    cout << shubham.getLevel() << endl;
    // cout << shubham.print() << endl; ye nhi chalega kyunki void kuch return nhi krta hai.

    shubham.print();

    shubham.setHealth(100);
    cout << shubham.getHealth() << endl;

    cout << sizeof(shubham) << endl;

    return 0;
}