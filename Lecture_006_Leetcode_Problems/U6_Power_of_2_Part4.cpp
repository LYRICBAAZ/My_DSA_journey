#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int temp = n;
    int count = 0;
    while(temp){
        if(temp&1){
            count++;
        }
        temp = temp>>1;
    }
    if(count==1){
        cout << "Power of 2" << endl;
    }
    else{
        cout <<"Not hai!!" << endl;
    }
}