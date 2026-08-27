#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(end>=start){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[10]={42, 7, 19, 3, 88, 25, 61, 14, 5, 30};
    reverseArray(arr,10);
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    return 0;
}