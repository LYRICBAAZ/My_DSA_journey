#include<iostream>
using namespace std;
bool checkSR(int arr[],int n){
    int count =0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    return count <=1;
}
void print(int arr[],int n){
    cout << "Array is sorted and rotated: "<< checkSR(arr,n) << endl;
}
int main(){
    int arr1[6]={4,5,6,1,2,3};
    int arr2[6]={1,1,1,1,1,1};
    int arr3[6]={4,5,6,1,2,4};
    int arr4[6]={4,5,6,1,2,5};
    int arr5[6]={4,5,6,7,9,9};

    print(arr1,6);
    print(arr2,6);
    print(arr3,6);
    print(arr4,6);
    print(arr5,6);

}