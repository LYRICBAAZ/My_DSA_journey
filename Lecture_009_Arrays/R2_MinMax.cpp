#include<iostream>
#include<climits>
using namespace std;
int getMin(int arr[],int n){
    int minimum = INT_MAX;
    for(int i=0;i<n;i++){
        if(minimum>arr[i]){
            minimum = arr[i];
        }
    }
    return minimum;
}
int getMax(int arr[],int n){
    int maximum = INT_MIN;
    for(int i=0;i<n;i++){
        if(maximum<arr[i]){
            maximum = arr[i];
        }
    }
    return maximum;
}
int main(){
    int arr[100];
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int MinElement = getMin(arr,n);
    int MaxElement = getMax(arr, n);
    cout << "Minimum Element of the Array is:" << MinElement  << endl;
    cout << "Maximum Element of the Array is:" << MaxElement << endl;
    return 0;
}