#include<iostream>
using namespace std;

class Hero{
    public:
    Hero(){
        cout << "Executed" << endl;
    }
};

int main(){
    cout << "Namastey" << endl;

    Hero shubham; // constructure call automatically

    cout << "Bharat" << endl;

    Hero *brijesh = new Hero;

}