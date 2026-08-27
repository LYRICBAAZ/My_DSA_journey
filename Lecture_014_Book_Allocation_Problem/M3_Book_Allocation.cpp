#include<iostream>
using namespace std;
bool bookallocation(int arr[],int size,int student,int mid){
    int studentCount = 1;
    int assignBook = 0;
    for(int i=0;i<size;i++){
        if(arr[i]+assignBook<=mid){
            assignBook = assignBook + arr[i];
        }
        else{
            studentCount++;
            assignBook = arr[i];
            if(studentCount > student){
                return false;
            }
        }
    }
    return true;
}

int binarySearching(int arr[],int size,int student){
    int start = 0;
    int ArraySum=0;
    int store = -1;
    for(int i=0;i<size;i++){
        ArraySum = ArraySum + arr[i];
    }
    int end = ArraySum;
    while(end>=start){
        int mid = start + ((end-start)/2);
        if(bookallocation(arr,size,student,mid)){
            store = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return store;
}

int main(){
    int student;
    int arr[10]={10,20,30,40,50,60,70,80,90,99};
    cout << "Enter the number of students: ";
    cin >> student;
    int Maxima = binarySearching(arr,10,student);
    cout << "The minimize Maxima is: "<< Maxima;
    return 0;
}

// Painter's partition problem is also same like this i.e. ditto.