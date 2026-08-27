#include<iostream>
using namespace std;
int binarySearch(int arr[],int size){
    int start = 0;
    int end = size - 1;
    while(end>start){
        int mid = start - ((start-end)/2);
        if(arr[mid]>arr[mid+1]){
            end = mid;
        }
        else if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
    }
    return arr[start];
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,6,5,4};
    int Peak = binarySearch(arr,10);
    cout << "Mountain Element of the array is: " << Peak << endl;
}