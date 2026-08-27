#include<iostream>
#include<climits>
#include <algorithm>
using namespace std;
int StallAssign(int arr[],int size,int cows, int mid){
    int LastStall = arr[0];
    int cowCount = 1;
    for(int i =1;i<size;i++){
        if(arr[i]-LastStall>=mid){
            cowCount++;
            LastStall=arr[i]; 
        }
    }
    if(cowCount >= cows){
        return true;
    }
    return false;
}
int binarySearch(int arr[],int size,int cows){
    sort(arr, arr + size);
    int store = -1;
    int start = 1;
    int end = arr[size-1]-arr[0];
    while(end>=start){
        int mid = start+((end-start)/2);
        if(StallAssign(arr,size,cows,mid)){
            start = mid+1;
            store = mid;
        }
        else{
            end = mid-1;
        }
    }
    return store;
}

int main(){
    int arr[5]={1,2,8,4,9};
    int cows;
    cout<<"Enter the numbers of cows: ";
    cin >> cows;
    int ans = binarySearch(arr,5,cows);
    cout << "Largest possible minimum distance is: "<< ans;
    return 0;

}