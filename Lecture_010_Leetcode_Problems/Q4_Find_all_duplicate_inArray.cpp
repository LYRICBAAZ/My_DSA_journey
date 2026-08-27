#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,5};
    int ans = 0;
    for(int i=0;i<10;i++){
        ans = ans^arr[i];
    }
    for(int j=1;j<10;j++){
        ans = ans^j;
    }
    cout << ans;
}