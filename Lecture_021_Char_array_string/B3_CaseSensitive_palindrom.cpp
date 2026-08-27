#include<iostream>
using namespace std;
int length(char ch[]){
    int count =0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}
bool checkPalindrom(char ch[]){
    int start=0;
    int end=length(ch)-1;
    while(end>=start){
        if(ch[start]!=ch[end]){
            return false;
        }
        end--;
        start++;
    }
    return true;
}
int main(){
    char ch[20];
    cout << "Enter the character: ";
    cin >> ch;
    cout <<"Number is palindrom: "<<checkPalindrom(ch);
    return 0;
}