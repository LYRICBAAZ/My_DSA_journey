#include<iostream>
using namespace std;
int isqrt(int n){
    int store=0;
    for(int i=0;i*i<=n;i++){
        if(i*i<=n){
            store = i;
        }
    }
    return store;
}

double dsqrt(int n,int sqrt){
    double store = -1;
    double ite =0.1;
    int x;
    cout << "Enter precision: ";
    cin >> x;
    for(int i=0;i<x;i++){
        for(double j=sqrt;j*j<=n;j+=ite){
            store = j;
        }
        ite /=10;
    }
    return store;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "sqrt: "<< isqrt(n) << endl;
    cout << "Sqrt: " << dsqrt(n,isqrt(n));

}