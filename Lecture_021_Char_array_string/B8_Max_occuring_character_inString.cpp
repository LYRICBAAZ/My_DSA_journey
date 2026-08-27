#include<iostream>
using namespace std;
int max(int arr[],int n){
    int maxi=arr[0];
    int store =0;
    for(int i=0;i<n;i++){
       if(maxi<arr[i]){
        maxi = arr[i];
        store = i;
       }
    }
    cout << store<< endl;
    cout << maxi<< endl;
    return store;
}
char valid(char ch){
    if(ch>='A' && ch<='Z'){
        ch = ch - 'A' +'a';
    }
    return ch;
}
char MaxOccure(string str){
    int arr[26]={0};
    int j=0;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            continue;
        }
        j = valid(str[i])-'a';
        arr[j]++;
    }
    return (max(arr,26)+'a');
}
int main(){
    string str = "Damn A man a plan a canal  Panama";
    cout << "Maximum occuring character is: " <<MaxOccure(str);

}