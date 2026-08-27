#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[10]={42, 7, 19, 3, 88, 25, 61, 14, 5, 30};
    insertion_sort(arr,10);
    cout << "Printing the sorted Array: ";
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    return 0;
}