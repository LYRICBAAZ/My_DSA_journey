#include<iostream>
using namespace std;
void arraySum(int arr[],int n,int &sum){
    // Base case
    if(n == 0){
        return;
    }
    // Processing 
    sum = sum + arr[0];

    // recursive Call
    return arraySum(arr+1,n-1,sum);

}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int sum = 0;
    arraySum(arr , 6,sum );
    cout << "Array sum: " << sum;

}