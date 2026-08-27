#include<iostream>
using namespace std;
int main(){
    int arr[5];

    int* p1 = &arr[4];
    int* p2 = &arr[1];

    // pointer subtraction = number of elements between them
    // use only in array otherwise undifine behavier.
    cout << p1 - p2 << endl;

    char ch1 = 'a';
    char ch2 = 'b';
    char *ptr1 = &ch1;
    char *ptr2 = &ch2;
    cout << *ptr1 + *ptr2 << endl; // interger ayega |||
}
