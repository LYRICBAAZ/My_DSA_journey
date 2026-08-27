#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4},{2,3,4,5},{5,6,7,8}};
    for(int i=0;i<3;i++){
        int rowSum = 0;
        for(int j=0;j<4;j++){
            rowSum += arr[i][j];
        }
        cout << rowSum << endl;
    }
}