// This is case sensitive Program;
#include<iostream>
using namespace std;
bool reverseString(string &str,int start, int end){
    //Base Case
    if(start>=end){
        return true;
    }

    // Processing
    if(str[start] != str[end]){
        return false;
    }

    //Recusive Call
    return reverseString(str,start+1,end-1);
} 
int main(){
    string str;
    cout << "Enter the string name: ";
    cin >> str;

    int start = 0;
    int end = str.length()-1;

    int val = reverseString(str,start,end);

    if(val){
        cout << "String is valid Palindrom";
    }
    else{
        cout << "String is not a Palindrom";
    }
    return 0;
}