#include<iostream>
// #include<utility>
using namespace std;
int main(){
    pair<string,int>p1={"Shubham",22};
    cout << p1.first << endl;
    cout << p1.second << endl;

    auto p2=make_pair("Maurya",18);
    cout << p2.first << endl;
    cout << p2.second << endl;

    pair<string,int>p3=make_pair("Class",333);
    cout << p3.first << endl;
    cout << p3.second << endl;
}