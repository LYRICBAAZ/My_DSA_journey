#include<iostream>
using namespace std;

class Hero {

    public:
    int health;
    char level;

    // Default constructure
    Hero(){

    }

    // Parameterised constructure
    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }

    // Copy constructure
    Hero(Hero &temp){
        health = temp.health;
        level = temp.level;
    }

};

int main(){

    Hero S(100,'Z');
    cout << S.health << endl;
    cout << S.level << endl;

    Hero R(S);        // Hero R = S   also valid
    cout << R.health << endl;
    cout << R.level << endl;

    Hero *X = new Hero(S);
    //  Hero *X = new Hero(*&S);
    // Hero *X = new Hero(*P)  if P heap allocated hota. 

    // Hero *X = new Hero;  
/*    *X = S;                                  */               

    cout << (*X).health << endl;
    cout << (*X).level << endl;


}