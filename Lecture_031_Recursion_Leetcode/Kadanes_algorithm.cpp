#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};

    // find max sum subarray.
    
    int total=0;
    int maxi=INT_MIN;
    int start = 0;
    int end = 0;

    for(int i=0;i<7;i++){
        total += arr[i];
        if(maxi<total){
            maxi = total;
            end = i;
        }
        if(total<0){
            total = 0;
            start = i;
        } 
    }
    cout <<"Max sum of sub array is: " << maxi << endl;

    cout <<"Subarray is: ";
    for(int i=start+1;i<=end;i++){
        cout << arr[i]<<" ";
    }

    return 0;
}