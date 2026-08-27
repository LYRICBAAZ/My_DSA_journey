#include<iostream>
using namespace std;
int HCF(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a<b) b=b-a;
        else a=a-b;
    }
    return a;
}
int main(){
    int a,b;
    cin >> a >> b;
    
    cout << "HCF of a and b is: " << HCF(a,b);

}