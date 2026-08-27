#include<iostream>
using namespace std;
int main(){
    pair<int,pair<int,int>>p={9,{111,22}};

    pair<int,pair<int,int>>p1={5,{33,6}};
    
    cout << p1.first << endl;
    cout << p1.second.first << endl;
    cout << p1.second.second << endl;

    pair<int,pair<int,int>>p2=make_pair(4,make_pair(11,99));
    cout << p2.first << endl;
    cout << p2.second.first << endl;
    cout << p2.second.second << endl;
}