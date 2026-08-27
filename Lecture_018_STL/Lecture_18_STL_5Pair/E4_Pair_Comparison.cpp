#include<iostream>
using namespace std;
int main(){
    pair<int,int> a = {1,5};
    pair<int,int> b = {2,3};

    cout << (a < b) << endl;   // true

    pair<int,int> a1 = {1,7};
    pair<int,int> b1 = {1,3};

    cout << (a1 < b1) << endl;   // false

    /*
    Default comparison hota hai:
    1️⃣ Pehle .first compare
    2️⃣ Agar equal → .second compare
    */
}