#include<iostream>
using namespace std;

// Abstract class
class ATM {
public:
    virtual void withdraw() = 0;   // sirf interface
};

// Implementation class
class SBI_ATM : public ATM {
public:
    void withdraw() {
        cout << "Money withdrawn from SBI ATM" << endl;
    }
};

int main() {
    ATM* a;              // user ko sirf ATM pata hai
    SBI_ATM s;

    a = &s;
    a->withdraw();       // use kar liya, andar ka logic nahi pata

    return 0;
}