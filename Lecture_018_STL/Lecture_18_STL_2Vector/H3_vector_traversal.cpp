#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec = {1,2,3,4,5,6,7};

    // Normal looping
    for(int i=0;i<vec.size();i++){
        cout << vec[i]<<" ";
    }
    cout << endl;

    // Range based loop
    for(int x:vec){
        cout << x << " ";
    }
    cout << endl;
  /*  Working:-
        1. vector ke har element ko.
        2. ek-ek karke x me copy karta.
        3. jab element khatam → loop stop.
  */

    // Iterator Loop (STL Original)
    for(auto itr=vec.begin();itr!=vec.end();itr++){
        cout << *itr <<" ";
    }
    cout << endl;


    // or extended version;
    for(vector<int>::iterator itr=vec.begin();itr!=vec.end();itr++){
        cout << *itr <<" ";
    }
    cout << endl;
}