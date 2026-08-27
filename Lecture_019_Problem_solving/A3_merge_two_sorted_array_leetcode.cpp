#include<iostream>
#include<vector>
using namespace std;
void merg(int arr1[],int a,int arr2[],int b){
    int i=a-1;
    int j=b-1;
    int k = a+b-1;
    while(i>=0 && j>=0){
        if(arr1[i]>=arr2[j]){
            arr1[k--]=arr1[i--];
        }
        else{
            arr1[k--]=arr2[j--];
        }
    }
    while(j>=0){
        arr1[k--]=arr2[j--];
    }
}
int main(){
    int arr1[7]={1,5,9,0,0,0,0};
    int arr2[4]={2,3,8,10};
    merg(arr1,3,arr2,4);
    for(int i=0;i<7;i++){
        cout << arr1[i] <<" ";
    }
    return 0;
}