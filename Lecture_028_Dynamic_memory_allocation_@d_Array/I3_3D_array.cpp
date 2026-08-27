#include <iostream>
using namespace std;

int main() {

    int x = 2;
    int y = 3;
    int z = 4;

    int ***ptr = new int**[x];

    for(int i = 0; i < x; i++) {

        ptr[i] = new int*[y];

        for(int j = 0; j < y; j++) {
            ptr[i][j] = new int[z];
        }
    }

    // Values store
    int count = 1;

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                ptr[i][j][k] = count++;
            }
        }
    }

    // Print
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                cout << ptr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Free memory
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            delete[] ptr[i][j];
        }

        delete[] ptr[i];
    }

    delete[] ptr;

    return 0;
}