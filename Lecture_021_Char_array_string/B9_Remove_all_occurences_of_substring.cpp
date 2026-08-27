#include<iostream>
using namespace std;
int main(){
    string str ="daabcbaabcbc";
    string subStr = "abc";
    while(str.find(subStr)<str.length()){
        str.erase(str.find(subStr),subStr.length());
    }
    cout << str;
}