#include<iostream>
using namespace std;
int HCF(int a,int b){
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    int a,b;
    cin >> a >> b;
    
    cout << "HCF of a and b is: " << HCF(a,b);

}