#include<iostream>
using namespace std;
int keyfinder(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if (key == arr[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout << "Enter the key value" << endl;
    cin >> n;
    cout << "Fill the array "<< endl;
    int arr[10];
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    if(keyfinder(arr,10,n)){
        cout << "Key value is present in the array";
    }
    else{
        cout << "Key is Absent in the array";
    }

    return 0;
}