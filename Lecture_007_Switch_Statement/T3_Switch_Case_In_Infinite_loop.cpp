#include<iostream>
using namespace std;
int main(){
    int n = 1;
    while(n != 0){
        switch(n){
            case 1: cout << "Are mai to loop ke bahar aa gya bhai !!";
            exit(0);
            default : cout << "Default";
                exit(0);
        }
        cout << "Hello";
    }
    cout << "Hello";
	return 0;
}

// exit(0)  terminate the whole Program.