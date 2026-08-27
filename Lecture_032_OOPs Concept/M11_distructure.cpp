#include<iostream>
using namespace std;
class Hero{
    public:
    // Constructure call
    Hero(){
        cout << "Constructure Call" << endl;
    }

    // Distructure Call
    ~Hero(){
        cout << "Distructure Call" << endl;
    }
};

int main(){
    Hero A;

    Hero *B = new Hero();
    delete B;
}