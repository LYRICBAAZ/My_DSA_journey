#include<iostream>
using namespace std;
int main(){
    int arr[4][5];
    cout << arr << endl;
    cout<< arr[0] << endl;
    cout << arr[0][0] << endl;

    int **ptr = new int*[4];
    for(int i=0;i<4;i++){
        *(ptr+i) = new int[5];
        for(int j=0;j<5;j++){
            *(*(ptr+i)+j) = (i+j);
        }
    }

    cout << endl;
    cout << ptr <<endl;
    cout << ptr[0] << endl;
    cout << ptr[0][0] << endl;
}