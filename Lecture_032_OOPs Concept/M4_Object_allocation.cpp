#include<iostream>
using namespace std;
class Hero {

    private:
    int score;

    public:
    int health;
    char level;

    void sethealth(int health){
        this->health = health;
    }
};
int main(){
    Hero shubham;     // Static allocation

    shubham.sethealth(100);
    // ACCESS class
    cout << shubham.health << endl;


    Hero *brijesh = new Hero;     // Heap allocation

    (*brijesh).sethealth(333);
    // ACCESS class
    cout << ((*brijesh).health) << endl;

    cout << (brijesh -> health) << endl;


    // PADDING 
    cout << sizeof(shubham);  
}