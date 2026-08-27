#include<iostream>
using namespace std;
int PivotFinder(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(end>start){
        int mid = start + ((end - start)/2);
        if(arr[mid]>arr[mid+1]){
            return (mid+1);
        }
        else if(arr[mid]<arr[mid+1] && arr[mid]>arr[0]){
            start = (mid+1); 
        }
        else{
            end = mid;
        }
    }
    return -1;
}
int main(){
    int arr[10]={7,8,9,1,2,3,4,5,6,7};
    int pivot = PivotFinder(arr,10);
    cout << "Pivot element is: " << arr[pivot] << endl;
    return 0;
}