#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec ={1,2,3,4,5};
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    vec.push_back(3);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    cout << vec[5] << endl;
    cout << vec[6] << endl;

    vec.pop_back();
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    vec.emplace_back(8);
    cout << vec.size() << endl;
    cout << vec[5] << endl;

    cout << vec.at(4) << endl;
    cout << vec.at(5) << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;
}