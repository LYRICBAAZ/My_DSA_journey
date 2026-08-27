#include<iostream>
using  namespace std;
int sqrtFinder(int n){
    long long int start = 0;
    long long int end = n;
    long long int sqrt;
    while(end>=start){
        long long int mid = start + ((end-start)/2);
        if(mid*mid == n){
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
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(n<0){
        cout << "Please enter only non negative numbers: ";
        return 0;
    }
     long long int sqrt = sqrtFinder(n);
    cout << "Square root of n is: "<< sqrt << endl;
    return 0;
}