#include<iostream>
using namespace std;
class Hero {
    public:  // Access modifier

    // Properties
    int health = 5;
    char level = 'a';

    private:
    int x = 10;

    void print(){
        cout << level << endl;
    }

   

};

int main(){

    Hero shubham;
    cout << shubham.health << endl;
    cout << shubham.level << endl;
    // cout << level;  not valid

    shubham.health = 50;
    cout << shubham.health << endl;


}