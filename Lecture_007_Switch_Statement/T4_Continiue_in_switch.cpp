#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number:";
    cin >> n;
    switch(n){
        case 1: cout <<"Number is 1 " << endl;
            break;
        case 2:cout << "Number is 2 "<< endl;
            continue;
        case 3:cout << "Number is 3 "<< endl;
            // break;
        default : cout <<"It is default case :"<< endl;
            // break;
    }
	return 0;
}
/*
Toh switch-case mein kyu nahi lagta continue?
Kyunki switch loop nahi hota.

switch ek selection control hota hai, iteration control nahi.

Usme koi "next iteration" hota hi nahi.

switch ke andar sirf break lagta hai taaki woh uss case ke baad switch block se bahar aa jaye.
*/