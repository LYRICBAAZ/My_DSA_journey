#include<iostream>
using namespace std;
int main(){
    char n;
    cout << "Enter the number: ";
    cin >>n;
    switch(n){
        case 'a': cout << "Number is one" << endl;
            break;
        case 1: cout << "Number is Two" << endl;
            break;
        case '1': cout << "Number is Three" << endl;
            break;
        default : cout << "This is default case" << endl;
            break;
    }
}
// Switch me jo number dala  jata hai switch uspr jake land hota hai and use execute kr deta hai and agr break na lga ho to runway ki trh aagey badhta chala jata hai means aage ke bhi cases execute hote chale jatey hai even default case bhi execute ho jayega.