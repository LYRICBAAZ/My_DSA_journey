#include<iostream>
using namespace std;
int main(){
    int arr[7]={3,5,3,4,5,4,7};
    int unique = 0;
    for(int i=0;i<7;i++){
        unique = unique^arr[i];
    }
    cout <<"The unique element in the array is: " << unique;
    return 0;
}