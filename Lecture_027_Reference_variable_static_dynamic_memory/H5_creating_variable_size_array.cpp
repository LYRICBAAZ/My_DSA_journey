#include<iostream>
using namespace std;
void getSum(int* arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout << "Sum of element in the array is: "<<sum;
}
int main(){
    int n;
    cout << "Enter the array size: ";
    cin >> n;
    int* arr = new int[n];

    // Input Process
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // Output Process
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;

    getSum(arr,n);

    // Delete heap memory
    delete []arr;
    arr = nullptr;

}