#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    Hero(int health,char level){

        cout << "Executed" << endl;

        this->health = health;
        this->level = level;

        cout << "Add. of this->" << this << endl;

    }
    Hero(){
        cout << "Default constructure Executed." << endl;
    }
};

int main(){
    Hero shubham(100,'A'); 

    cout << "Add. of shubham: "<< &shubham << endl;
    cout << shubham.health << endl;
    cout << shubham.level << endl;


    Hero *brijesh = new Hero(80,'B');
    cout << "Add. of brijesh: "<< &brijesh << endl;
    cout << (*brijesh).health << endl;
    cout << brijesh->level << endl;

    Hero bari;

}