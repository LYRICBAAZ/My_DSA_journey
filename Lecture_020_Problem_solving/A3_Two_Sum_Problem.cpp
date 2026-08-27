#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> reverseSum(vector<int>& vec){
    int start=0;
    int end=vec.size()-1;
    while(end>=start){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    return vec;
}
vector<int> twoSum(int arr1[],int n,int arr2[],int m){
    vector<int>vec;
    int i=n-1;
    int j=m-1;
    int sum = 0;
    int carry = 0;
    while(i>=0 && j>=0){
        sum=arr1[i]+arr2[j]+carry;
        carry = sum/10;
        sum = sum%10;
        vec.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        sum = arr1[i]+carry;
        carry = sum/10;
        sum = sum%10;
        vec.push_back(sum);
        i--;
    }
    while(j>=0){
        sum = arr2[j]+carry;
        carry = sum/10;
        sum = sum%10;
        vec.push_back(sum);
        j--;
    }
   if(carry){                // ⭐ IMPORTANT
        vec.push_back(carry);
   }
    return reverseSum(vec);
}
int main (){
    int arr1[4]={1,3,4,5};
    int arr2[3]={9,7,5};
    
    for(auto val:twoSum(arr1,4,arr2,3)){
        cout<<val<<" ";
    }
    return 0;
}
