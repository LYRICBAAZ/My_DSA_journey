#include<iostream>
using namespace std;
string replace(string& str){
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp +="@40";
        }
        else{
            temp +=str[i];
        }
    }
    return temp;
}
int main(){
    string str = "A man a plan a canal  Panama";
    cout << str << endl;
    str = replace(str);
    cout << str << endl;
}