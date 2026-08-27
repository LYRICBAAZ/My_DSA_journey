#include<iostream>
using namespace std;
bool checkSort(int *arr,int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return checkSort(arr+1,n-1);

}
int main(){
    int arr[6]={1,2,3,5,4,6};
    cout <<"Array is: " << checkSort(arr,6);
    

}
