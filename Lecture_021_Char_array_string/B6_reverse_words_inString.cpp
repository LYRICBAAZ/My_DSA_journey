#include<iostream>
#include <algorithm>
using namespace std;
string Sreverse(string& str){
    // reverse(str.begin(),str.end());
    int start=0;
    int end =str.length()-1;
    while(start<=end){
        swap(str[start++],str[end--]);
    }
    return str;
}

string wordReverse(string& str){
    string temp="";
    for(int i=0;i<str.length();i++){
        string word;
        while(i<str.length() && str[i]!=' '){
            word.push_back(str[i]);
            i++;
        }
        if(word.length()>0){
            if(!temp.empty()){
                temp +=" ";
            }
            temp += Sreverse(word); 
        }
    }
    return temp;
}

int main(){
    string s = "A man a plan a canal  Panama";
    cout << s << endl;
    Sreverse(s);
    cout << s <<endl;
    s=wordReverse(s);
    cout << s;

}