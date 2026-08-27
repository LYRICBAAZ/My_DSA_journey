#include<iostream>
using namespace std;
int main(){
    int arr[9]= {1,0,0,1,1,0,1,0,1};
    int s = 0;
    int e = 8;
    while(s<e){
        if(arr[s]==0){
            s++;
        }
        else if(arr[e]==1){
            e--;
        }
        else{
            swap(arr[s],arr[e]);
        }
    }
    for(int i=0;i<9;i++){
        cout << arr[i] <<" ";
    }
    return 0;
}