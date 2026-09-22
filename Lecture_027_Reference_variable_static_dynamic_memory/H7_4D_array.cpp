#include<iostream>
using namespace std;

int main(){

    int a, b, c, d;

    cout << "Enter a, b, c, d: ";
    cin >> a >> b >> c >> d;

    int ****ptr = new int***[a];

    for(int i = 0; i < a; i++){
        ptr[i] = new int**[b];

        for(int j = 0; j < b; j++){
            ptr[i][j] = new int*[c];

            for(int k = 0; k < c; k++){
                ptr[i][j][k] = new int[d];
            }
        }
    }

    // Deallocation
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            for(int k = 0; k < c; k++){
                delete[] ptr[i][j][k];
            }

            delete[] ptr[i][j];
        }

        delete[] ptr[i];
    }

    delete[] ptr;
}