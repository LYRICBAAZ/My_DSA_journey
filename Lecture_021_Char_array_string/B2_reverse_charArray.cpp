#include<iostream>
using namespace std;
int length(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char ch[],int len){
    int start=0;
    int end=len-1;
    while(end>=start){
        swap(ch[start++],ch[end--]);
    }
}
int main(){
    char ch[20];
    cout <<"Enter your name: ";
    cin >> ch;
    reverse(ch,length(ch));
    cout <<"Reverse name is: "<< ch;
    return 0;
}