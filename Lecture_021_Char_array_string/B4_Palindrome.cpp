#include<iostream>
using namespace std;
char check(char ch){
    if('A'<=ch && ch<='Z'){
        return (ch-'A'+'a');
    }
    else{
        return ch;
    }
}
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
        if(check(ch[start])!=check(ch[end])){
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