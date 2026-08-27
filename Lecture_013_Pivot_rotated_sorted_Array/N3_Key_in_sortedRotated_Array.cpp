#include<iostream>
using namespace std;
int pivot(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(end>start){
        int mid = start + ((end - start)/2);
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
    }
    return start;
}
int keyIndex(int arr[] ,int size , int key){
    int start = 0;
    int end = size-1;
    if(key > arr[0]){
        end = pivot(arr,size)-1;
    }
    else if (key < arr[0]){
        start = pivot(arr,size);
    }
    else if (key == arr[0]) return 0;
    while(start <=end){
        int mid = start + ((end - start)/2);
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[10]={8,9,10,1,2,3,4,5,6,7};
    int key = keyIndex(arr,10,7);
    cout << "Key Index of the sorted rotated Array is: " << key << endl;
}