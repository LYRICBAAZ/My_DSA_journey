#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec1(7,-1);
    for(int x:vec1){
        cout << x << " ";
    }
    cout << endl;
    vector<int>vec2(vec1);
    for(int x:vec2){
        cout << x << " ";
    }
}