#include<iostream>
using namespace std;
int main(){
    int n;
    char ch = 'c';
    cout << "Enter the number: ";
    cin >>n;
    switch(n){
        case 1: switch(ch){
            case 'a': cout << "This is nested a.";
                break;
            case 'b': cout << "This is nested b.";
                break;
            case 'c': cout << "This is nested c.";
                break;
            default : cout << "This is nested default case.";
                break;
        }
            break;
        case 2: cout << "Number is Two" << endl;
            break;
        case 3: cout << "Number is Three" << endl;
            break;
        default : cout << "This is default case" << endl;
            break;
    }
}