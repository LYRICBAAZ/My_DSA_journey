#include<iostream>
#include<climits>
using namespace std;
void insertionSort(int arr[],int size,int n){
    // Base case
    if(n==size){
        return;
    }

    //Processing 
    for(int i=n;i>=1;i--){
        if(arr[i]<arr[i-1]){
           int temp = arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
        else{
            break;
        }
    }

    // recursive call
    insertionSort(arr,size,n+1);

    
}
void print(int arr[],int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[6]={10,1,7,6,14,9};
    insertionSort(arr,6,1);
    print(arr,6);
    return 0;
}