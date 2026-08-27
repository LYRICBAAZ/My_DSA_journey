#include<iostream>
#include<cstring>
using namespace std;

class Hero {
public:
    int health;
    char* name;

    // Constructor
    Hero(int health, const char* name){
        this->health = health;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    // 🔥 Deep Copy Constructor
    Hero(Hero &temp){
        cout << "Deep Copy Constructor" << endl;
        this->health = temp.health;

        // NEW memory allocate (important)
        this->name = new char[strlen(temp.name) + 1];
        strcpy(this->name, temp.name);
    }

    // 🔥 Destructor (memory free)
    ~Hero(){
        delete [] name;
    }

    void print(){
        cout << "Health: " << health << endl;
        cout << "Name: " << name << endl;
    }
};

int main(){
    Hero h1(100, "Shubham");

    // Deep copy
    Hero h2(h1);

    // Change h1 name
    h1.name[0] = 'R';

    cout << "h1:" << endl;
    h1.print();

    cout << "h2:" << endl;
    h2.print();
}