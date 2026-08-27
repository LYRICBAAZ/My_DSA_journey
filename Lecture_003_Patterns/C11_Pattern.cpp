#include<iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter the number: ";
    cin >>n;
    int i = 0;
    while(i<n){
        int space = (n-i-1);
        while(space){
            cout <<" ";
            space--;
        }
        int star = i+1;
        while(star){
            cout <<"*";
            star--;
        }
        cout << endl;
        i++;
    }
    return 0;
}