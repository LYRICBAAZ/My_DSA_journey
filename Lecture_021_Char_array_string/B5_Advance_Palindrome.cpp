#include<iostream>
using namespace std;
char valid(char ch){
    if(ch>='A' && ch<='Z'){
        ch = ch -'A' + 'a';
    }
    return ch;
}
bool checkPalindrom(const string& str){
    string temp;
    for(auto val:str){
        if(valid(val)>='a' && valid(val)<='z'){
            temp.push_back(valid(val));
        }
    }
    int start = 0;
    int end = temp.length()-1;
    while(start<=end){
        if(temp[start++]!=temp[end--]){
            return false;
        }
    }
    return true;
}
int main(){
    string str = "A man, a plan, a canal: Panama";
    cout << "The String is palindrome: "<< checkPalindrom(str);
}