#include<iostream>
using namespace std;
void reverseString(string &str,int start, int end){
    //Base Case
    if(start>=end){
        return;
    }

    // Processing
    swap(str[start++],str[end--]);

    //Recusive Call
    reverseString(str,start,end);
} 
int main(){
    string str = "Shubham_Maurya";

    int start = 0;
    int end = str.length()-1;

    reverseString(str,start,end);
    cout << str;
}