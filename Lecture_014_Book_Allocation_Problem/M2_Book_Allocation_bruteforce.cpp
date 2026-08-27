#include<iostream>
#include<climits>
using namespace std;
int bookallocation(int arr[],int size,int student){
    int ArrayMax = 0;
    int ArraySum = 0;
    int assignPages = 0;
    int studentCount = 1;
    for(int i=0;i<size;i++){
        ArrayMax = max(ArrayMax,arr[i]);
        ArraySum = ArraySum + arr[i];
    }
    for(int i = ArrayMax;i<=ArraySum;i++){
        studentCount = 1;
        assignPages = 0; 
        for(int j=0;j<size;j++){
            if(arr[j]+assignPages<=i){
                assignPages += arr[j];
            }
            else{
                studentCount++;
                assignPages = arr[j];
                if(studentCount>student){
                    break;
                }
            }
        }
        if(studentCount == student){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[10]={10,20,30,40,50,60,70,80,90,99};
    int student;
    cout << "Enter the number of students: ";
    cin >> student;
    if(student>10){
        cout << "Students should be always less than array size: ";
        return 0;
    }
    cout << "The minimize Maximma is: "<< bookallocation(arr,10,student);
    return 0;
}