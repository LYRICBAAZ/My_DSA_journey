#include<iostream>
using namespace std;

void print(int arr[],int start,int end){
    for(int i=start;i<=end;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

bool binarySearch(int arr[],int target,int start,int end){

    print(arr,start,end);

    // Base case
    if(start>end){
        return false;
    }

    int mid = start + (end - start)/2;

    
    if(arr[mid]==target){
        return true;
    }
    

    // Processing
    if(arr[mid]>target){
        return binarySearch(arr,target,start,mid-1);
    }
    else{
        return binarySearch(arr,target,mid+1,end);
    }
}
int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int start = 0;
    int end = 9;

    cout << "Target is: " << binarySearch(arr,target,start,end);
}