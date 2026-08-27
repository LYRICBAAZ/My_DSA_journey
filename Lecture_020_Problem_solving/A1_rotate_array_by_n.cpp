#include<iostream>
#include<vector>
using namespace std;
void rotatedArray(vector<int>& v1,int n,int k){
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=v1[i];
    }
    v1=temp;
}

int main(){
    vector<int>v1 ={1,2,3,4,5,6,7,8};
    rotatedArray(v1,v1.size(),4);
    for(auto val:v1){
        cout << val << " ";
    }
    return 0;

}