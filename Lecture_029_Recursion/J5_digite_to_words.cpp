#include<iostream>
using namespace std;
void wordPrint(string arr[],int n){
    if(n==0){
        return;
    }
    int digit = n%10;
    n = n/10;
    wordPrint(arr,n);
    cout << arr[digit] <<" ";
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    string arr[10] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    wordPrint(arr,n);
}