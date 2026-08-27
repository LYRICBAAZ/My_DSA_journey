#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};

    for(int s=0;s<4;s++){
        for(int e=s;e<4;e++){
            for(int i=s;i<=e;i++){

                cout << arr[i] <<" ";

            }
            cout << endl;
        }
    }
}

// No any better solution Exist.