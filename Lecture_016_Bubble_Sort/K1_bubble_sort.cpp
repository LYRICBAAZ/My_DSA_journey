#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        bool swapCount=false;
        for(int j=0;j<(n-i);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapCount=true;
            }
        } 
        if(swapCount==false){
            break;
        }
    }
}
int main(){
    int arr[10]={42, 7, 19, 3, 88, 25, 61, 14, 5, 30};
    bubble_sort(arr,10);
    cout << "Printing the sorted Array: ";
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    return 0;
}