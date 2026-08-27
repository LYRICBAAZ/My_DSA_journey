#include<iostream>
using namespace std;

void spiralPrint(int arr[][4], int row, int col){

    int firstRow = 0, lastRow = row - 1;
    int firstCol = 0, lastCol = col - 1;
    int count = 0, total = row * col;

    while(count < total){

        // First Row
        for(int i = firstCol; i <= lastCol && count < total; i++){
            cout << arr[firstRow][i] << " ";
            count++;
        }
        firstRow++;

        // Last Column
        for(int i = firstRow; i <= lastRow && count < total; i++){
            cout << arr[i][lastCol] << " ";
            count++;
        }
        lastCol--;

        // Last Row
        for(int i = lastCol; i >= firstCol && count < total; i--){
            cout << arr[lastRow][i] << " ";
            count++;
        }
        lastRow--;

        // First Column
        for(int i = lastRow; i >= firstRow && count < total; i--){
            cout << arr[i][firstCol] << " ";
            count++;
        }
        firstCol++;
    }
}

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    spiralPrint(arr,3,4);
}