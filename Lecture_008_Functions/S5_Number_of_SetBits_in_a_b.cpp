#include<iostream>
using namespace std;
int setBits(int a){
    int count = 0;
    while(a !=0 ){
        if(a&1){
            count++;
        }
        a = a>>1;
    }
    return count;
}
int main(){
    int a,b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    cout <<"Total setbits in a and b is: "<< (setBits(a) + setBits(b));
    return 0;
}