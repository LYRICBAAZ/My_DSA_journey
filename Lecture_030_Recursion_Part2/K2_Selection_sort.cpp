#include<iostream>
#include<climits>
using namespace std;
void selectionSort(int arr[],int size){
    //Base case
    if(size == 0){
        return;
    }

    //Processing 
    int mini = INT_MAX;
    int minIndex = 0;
    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini = arr[i];
            minIndex = i;
        }
    }
    swap(arr[0],arr[minIndex]);

    // Recursive Call
    selectionSort(arr+1,size-1);

    
}
void print(int arr[],int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[6]={10,1,7,6,14,9};
    selectionSort(arr,6);
    print(arr,6);
    return 0;
}