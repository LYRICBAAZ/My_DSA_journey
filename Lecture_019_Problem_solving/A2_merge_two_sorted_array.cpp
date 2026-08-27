#include<iostream>
using namespace std;
void mergSort(int arr1[],int arr2[],int arr3[],int a,int b){
    int i=0 , j=0 ,k=0;
    while(i<a && j<b){
        if(arr1[i]<=arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else if(arr2[j]<arr1[i]){
            arr3[k++]=arr2[j++];
        }
    }
    while(i<a){
        arr3[k++]=arr1[i++];
    }
    while(j<b){
        arr3[k++]=arr2[j++];
    }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[4]={2,4,6,8};
    int arr3[9]={0};

    mergSort(arr1,arr2,arr3,5,4);
    for(int i=0;i<9;i++){
        cout << arr3[i] << " ";
    }


}