#include<iostream>
using namespace std;
int main(){

    int x=10;
    int&y =x; // ek admi ke do name
    // x ka dusra name y 

    cout << x<<" "<<y<< endl;
    cout << &x<<" "<<&y<< endl; 



    char arr[5]="1234";
    char *ptr = arr;
    cout << arr << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;


    char num = 'a';
    char * ptr1 = &num;
    cout << &num << endl;  // ye aur ye dono
    cout << ptr1 << endl;  // undifine behave krega
    
    //  &num aur ptr1 → 'a' → ? → ? → ? → ... → '\0'
    // ye sirf 'a' nhi print krega ye tbtk chalega jb tk '\0' na mil jaye thats why it is risky..


    cout << *ptr1 << endl;
    cout << &ptr1 << endl;

    cout << (void*)&num << endl;
    cout <<(void*)ptr << endl; 

    // address ke liye use this...


}