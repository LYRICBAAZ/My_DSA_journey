#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the Number.";
    cin >> a;
    if(a>0){
        cout<<"Number is positive";
    }
    else if(a<0){
        cout<<"Number is Negative";
    }
    else{
        cout << "Number is 0";
    }

    return 0;
}
// cin >> a >>endl;  Invalid hai because endl output ke liye bna hai and cin input ke liya hai.