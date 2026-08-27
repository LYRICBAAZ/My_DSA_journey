#include<iostream>
using namespace std;
int main(){
    int arr[10]={3,5,6,7,8,9,23,54,5,6};
    int start=0;
    int end = 9;
    while(end>=start){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    return 0;
}