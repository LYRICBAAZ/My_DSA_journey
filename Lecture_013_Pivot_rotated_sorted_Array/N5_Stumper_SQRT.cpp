#include<iostream>
using namespace std;
int sqrtFinder(int n){
    long long int start = 0;
    long long int end = n;
    long long int sqrt =0;
    while(end>=start){
        long long int mid =start+((end-start)/2);
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            sqrt = mid;
            start = mid+1;
        }
        else if(mid*mid>n){
            end = mid-1;
        }
    }
    return sqrt;
}

double doubleSqrt(int n,int accuracy){
    int Num = sqrtFinder(n);
    double Dsqrt = Num;
    double factor = 1;
    for(int i=0;i<accuracy;i++){
        factor = factor/10;
        for(double j=Dsqrt;j*j<=n;j=j+factor){
            Dsqrt = j; 
        }
    }
    return Dsqrt;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    double Sqrt = doubleSqrt(n,4);
    cout << "Square root of n is: " << Sqrt << endl;
    return 0;
}