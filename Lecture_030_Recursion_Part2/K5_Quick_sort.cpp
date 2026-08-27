#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            count++;
        }
    }

    // Place pivot at his write place
    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);
    
    int i = s, j = e;
    while( i<pivotIndex && j>pivotIndex){

        while(i < pivotIndex && arr[i] <= pivot){
            i++;
        }
        while(j > pivotIndex && arr[j] >= pivot){
            j--;
        }
        if( i<pivotIndex && j>pivotIndex ){
            swap(arr[i++],arr[j--]);
        }

    }
    
    return pivotIndex;
}

void QuickSort(int arr[],int s, int e){

    // Base Case
    if(s>=e){
        return;
    }

    // Partion
    int p = partition(arr,s,e);

    // Left Quicksort
    QuickSort(arr,s,p-1);
        
    // Right Quicksort
    QuickSort(arr,p+1,e);
    

}
int main(){
    int arr[]={3,5,1,8,2,4};

    QuickSort(arr,0,5);

    for(auto val : arr){
        cout << val << " ";
    }

    return 0;
}