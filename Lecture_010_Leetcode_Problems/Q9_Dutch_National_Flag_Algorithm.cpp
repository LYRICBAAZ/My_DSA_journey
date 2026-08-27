#include <iostream>
using namespace std;

int main() {
    int arr[]= {1,0,2,2,0,1,1,2,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(mid == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(mid == 1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}