#include<iostream>
using namespace std;
int main (){
    int arr[10]={1,2,3,4,5,6,7,8,9,5};
    int duplicate=0;
    for(int i=0;i<10;i++){
        duplicate=arr[i]^duplicate^i;
    }
    cout << "Duplicate number is: "<<duplicate;
    return 0;
}