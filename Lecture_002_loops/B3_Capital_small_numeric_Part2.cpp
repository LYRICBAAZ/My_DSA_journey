#include<iostream>
using namespace std;
int main(){
    char a;
    cout << "Enter the character"<< endl;
    cin >> a;

    if(a>='a' && a<='z'){
        cout << "This is lowercase.";
    }

    else if(a>='A' && a<='Z'){
        cout << "This is Uppercase.";
    }

    else if(a>='0' && a<='9'){
        cout << "This is Numeric.";
    }

// char takes only one digite .
    return 0;
}