#include<iostream>
#include<vector>
using namespace std;
int main(){
    // Initialization of vector;
    vector<int>vec1; 
    vector<int>vec2(3);  // 3 size hai vector ka na ki value {0,0,0} aise fill hai;
    vector<int>vec3(4,-1); // {-1,-1,-1,-1};
    vector<int>vec4={1,2,3,4};
    // DEEP Copy !!
    vector<int>vec5(vec4);  // vec5 ko vec4 se initialize krna;
    vector<int> vec6 = vec1;

    vector<int> vec7;
    vec7 = vec1;

    // vector<int>vec2(3);  and vector<int>vec2(3,0);  both are same;

}