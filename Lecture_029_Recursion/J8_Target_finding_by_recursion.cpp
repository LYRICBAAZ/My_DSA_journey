#include<iostream>
using namespace std;
bool Finder(int arr[],int size,int target){
    // Base case
    if(size==0){
        return false;
    }

    // Processing 
    if(arr[0]==target){
        return true;
    }

    // Recursive call
    return Finder((arr+1),size-1,target);
}
int main(){
    int arr[10] = {3, 7, 1, 9, 4, 6, 2, 8, 5, 10};
    int target;
    cout << "Enter the target: ";
    cin >> target;
    cout << "Target is found: " << Finder(arr,10,target);

}