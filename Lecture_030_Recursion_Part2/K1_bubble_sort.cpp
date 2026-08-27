#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    int count = 0;
    // Base case
    if(size<=1){
        return;
    }

    // Processing 
    for(int i=0;i<(size-1);i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            count++;
        }
    }

    //Recursive call
    if(count){
        bubbleSort(arr,(size-1));
    }
    
}
void print(int arr[],int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[6]={10,1,7,6,14,9};
    bubbleSort(arr,6);
    print(arr,6);
    return 0;
}