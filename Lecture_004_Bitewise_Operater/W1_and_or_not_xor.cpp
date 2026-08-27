#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the numbers: "<< endl;
    cin >>a>>b;
    cout << "a&b is: "<<(a&b) <<endl;
    cout << "a|b is: "<<(a|b) <<endl;
    cout << "a^b is: "<<(a^b) <<endl;
    cout << "~a is: "<<~a <<endl;
    cout << "~b is: "<<~b <<endl;

    return 0;
}