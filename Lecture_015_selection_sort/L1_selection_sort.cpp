#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            // If condition can confuse you but it is correct.
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
int main(){
    int arr[10]={42, 7, 19, 3, 88, 25, 61, 14, 5, 30};
    selection_sort(arr,10);
    cout << "Printing the sorted Array: ";
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    return 0;
}