#include<iostream>
#include <vector>
using namespace std;
void merge(vector<int> &vec , int start ,int mid , int end){
    int i = start;
    int j = mid+1;
    vector<int> v;
    while(i <= mid && j <= end){
        if(vec[i]>vec[j]){
            v.push_back(vec[j]);
            j++;
        }
        else{
            v.push_back(vec[i]);
            i++;
        }
    }

    while(i <= mid){
        v.push_back(vec[i]);
            i++;
    }

    while(j <= end){
        v.push_back(vec[j]);
            j++;
    }

    for (int k = 0; k < v.size(); k++)
        vec[start + k] = v[k];

}

void mergeSort(vector<int> &vec,int start,int end){
    if(start < end){

        int mid = start - (start -end)/2;

        // For left Part
        mergeSort(vec,start,mid);

        // For Right Part
        mergeSort(vec,mid+1,end);

        // merging
        merge(vec , start , mid , end);

    }

}
int main(){
    vector<int> vec ={38,27,43,3,9,82,10};
    int start = 0;
    int end = vec.size()-1;
    mergeSort(vec,start,end);

    for(int num:vec){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}