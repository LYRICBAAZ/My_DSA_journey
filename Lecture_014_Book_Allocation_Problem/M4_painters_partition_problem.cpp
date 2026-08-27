#include<iostream>
#include<climits>
using namespace std;
bool isFine(int arr[],int size,int RealWorker, int mid ){
    int assignWork = 0;
    int worker = 1;
    for (int i=0;i<size;i++){
        if(arr[i]+assignWork<=mid){
            assignWork +=arr[i];
        }
        else{
            worker++;
            assignWork = arr[i];
            if(worker>RealWorker){
                return false;
            }
        }
    }
    return true;
}

int binarySearch(int arr[],int size,int RealWorker){
    int sum = 0;
    int MaxNum = 0;
    int store = -1;
    for (int i=0;i<size;i++){
        sum +=arr[i];
        MaxNum = max(MaxNum,arr[i]);
    }
    int start = MaxNum; 
    int end = sum;
    while(end>=start){
        int mid = start+((end-start)/2);
        if(isFine(arr,size,RealWorker,mid )){
            end = mid-1;
            store = mid;
        }
        else{
            start = mid+1;
        }
    }
    return store;
}

int main(){
    int RealWorker;
    int arr[10] = {10,11,8,1,4,5,6,3,7,9};
    cout << "Enter the total worker: ";
    cin >> RealWorker;
    int ans = binarySearch(arr,10,RealWorker);
    cout << "Final ans is: "<<ans;
     return 0;
}