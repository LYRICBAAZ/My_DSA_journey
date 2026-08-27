#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i = 0;
    while(i<n){
        int j=0;
        while(j<(n-i)){
            cout << (j+1);
            j++;
        }
        int k=0;
        while(k<i){
            cout <<"**";
            k++;
        }
        int l=0;
        while(l<(n-i)){
            cout<<(n-l-i);
            l++;
        }
        i++;
        cout << endl;
    }
    return 0;
}