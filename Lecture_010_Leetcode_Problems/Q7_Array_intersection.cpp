#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 4, 5};
    int n1 = 5;
    int n2 = 4;
    int s = 0;
    int e = 0;
    while(s<n1 && e<n2){
        if(arr1[s]<arr2[e]){
            s++;
        }
        else if(arr1[s]>arr2[e]){
            e++;
        }
        else{
            cout << arr1[s] << " ";
            s++;
            e++;
        }
    }
    return 0;
}