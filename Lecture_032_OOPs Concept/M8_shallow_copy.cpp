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

    //    strcpy(dest,source);
/*        while(*name != '\0'){
            *this->name = *name;
            this->name++;
            name++;
        }                                       
*/
    }

    // Shallow Copy Constructor
    Hero(Hero &temp){
        cout << "Shallow Copy Constructor" << endl;
        this->health = temp.health;
        this->name = temp.name;    // ⭐ SHALLOW COPY
        //  pointer copy (same address)   sara problem yahi hai shallow copy ka...
    }

    void print(){
        cout << "Health: " << health << endl;
        cout << "Name: " << name << endl;
    }
};

int main(){
    Hero h1(100, "Shubham");

    // Shallow copy
    Hero h2(h1);

    // Change h1 name
    h1.name[0] = 'R';

    cout << "h1:" << endl;
    h1.print();

    cout << "h2:" << endl;
    h2.print();
}