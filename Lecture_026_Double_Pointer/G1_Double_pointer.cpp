#include<iostream>
using namespace std;

void updateValue(int **q){
    **q = **q + 20;   // value change
}
void changePointer(int **q){
    static int b = 100;
    *q = &b;          // pointer change
}
int main(){
    int a = 10;
    int *p = &a;
    int **q = &p;
    cout << "Initial value of a: " << a << endl;
    // value update using double pointer
    updateValue(q);
    cout << "After updateValue: " << a << endl;
    // pointer change
    changePointer(q);
    cout << "After changePointer: " << *p << endl;
    return 0;
}