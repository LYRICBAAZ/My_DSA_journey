#include<iostream>
#include<climits>
using namespace std;
// BAD PRACTICE!!!
int bookallocation(int arr[],int size,int student){
    int Arraysum = 0;
    int ArrayMax = INT_MIN;
    for(int i=0;i<size;i++){
        Arraysum = Arraysum + arr[i];
        ArrayMax = max(ArrayMax,arr[i]);
    }
    int MinPages = ArrayMax;
    int PageAllocation = 0;
    int Countstudent = 1;
    for(int i=0;i<size;i++){
        if(PageAllocation+arr[i]<=MinPages){
            PageAllocation = PageAllocation + arr[i];
        }
        else{
            Countstudent++;
            PageAllocation = arr[i];
            if(Countstudent>student){
                PageAllocation = 0;
                Countstudent =1;
                MinPages++;
                i=-1;
                if(MinPages>Arraysum){
                    return -1;
                }
            }
        }
    }
    return MinPages;
}
int main(){
    int student;
    int arr[10]={10,20,30,40,50,60,70,80,90,99};
    cout << "Enter number of students: ";
    cin >>student;
    cout << "The minimize Maximma is: "<< bookallocation(arr,10,student);
    return 0;
} 
