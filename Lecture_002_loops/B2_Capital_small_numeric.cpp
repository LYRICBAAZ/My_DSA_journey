// NOTE-: Input should be an ASCII value
// Best practice has been done in part 2.

#include<iostream>
using namespace std;
int main(){
    int a ;
    cout << "Enter the Symbol." << endl;
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

    return 0;
}