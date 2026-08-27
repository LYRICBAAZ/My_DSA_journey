#include<iostream>
#include <cstring>
// #include <string.h>  // we can also use this but this is not modern cpp

// #include <bits/stdc++.h>   Stumper header file
using namespace std;
int getLength(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char ch[20];
    cout << " Enter your name: "<< endl;
    cin >> ch;
    cout <<"Your name is: " << ch << endl;
    cout << "Length of the character Array is: "<< getLength(ch);
    cout << endl << sizeof(ch)/sizeof(char) << endl;
    cout << strlen(ch) << endl;

    // strlen(ch) - actual string length
    // sizeof(ch) - array ki total capacity
}