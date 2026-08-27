#include<iostream>
using namespace std;
bool present(int arr[][4],int target,int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(target == arr[i][j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,0,11,12};
    cout << "the key is: "<< present(arr,12,3,4);
}