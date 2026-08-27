#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(end>=start){
        int mid = start-((start-end)/2);
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
    }
    return false;
}
int main(){
    int  arr1[10]={0,1,2,3,4,5,6,7,8,9};
    int arr2[9]={11,34,56,78,81,88,89,91,99};
    int index1 = binarySearch(arr1,10,8);
    int index2 = binarySearch(arr2,9,89);
    cout << "Index of the key is: " << index1 << endl;
    cout << "Index of the key is: " << index2;
}