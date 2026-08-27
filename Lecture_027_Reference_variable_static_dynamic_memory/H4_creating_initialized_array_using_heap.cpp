#include<iostream>
using namespace std;
int main (){
    int* arr =  new int[3];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;

    // arr[3]={1,2,3}; // not allowed
/*
    ka matlab array ko assign karna nahi hai.
    arr[3] ka matlab hai:
    array ka ek single element, specifically index 3.
    Jabki {1,2,3} 3 values ka initializer list hai.

*/

//      int* arr = new int[3]{1, 2, 3};   
//      ✅ Ye allowed hai.

/*
    for(int i=0;i<3;i++){
        cin >> arr[i];
    }
*/
    for(int i=0;i<3;i++){
        cout <<  arr[i] << " ";
    }

}