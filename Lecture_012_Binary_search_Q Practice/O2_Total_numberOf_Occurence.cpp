#include<iostream>
using namespace std;
int leftoccurence(int arr[],int size,int key){
    int start = 0;
    int end = (size - 1);
    int store = -1;
    while(end>=start){
        int mid = start - ((start-end)/2);
        if (arr[mid]==key){
            store = mid;
            end = mid-1;
        }
        else if( arr[mid]>key){
            end = mid-1;
        }
        else if( arr[mid]<key){
            start = mid+1;
        }
    }
    return store;
}
int rightoccurence(int arr[],int size,int key){
    int start = 0;
    int end = (size - 1);
    int store = -1;
    while(end>=start){
        int mid = start - ((start-end)/2);
        if (arr[mid]==key){
            store = mid;
            start = mid+1;
        }
        else if( arr[mid]>key){
            end = mid-1;
        }
        else if( arr[mid]<key){
            start = mid+1;
        }
    }
    return store;
}
int main(){
    int arr1[14] = {0,1,1,1,1,3,4,4,5,5,6,7,7,9};
    int leftOcc = leftoccurence(arr1,14,7);
    int rightOcc = rightoccurence(arr1,14,7);
    cout << "Total number of occurence of the key is: " << ((rightOcc-leftOcc)+1); 
}