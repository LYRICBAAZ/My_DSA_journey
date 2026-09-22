#include<iostream>
using namespace std;
int main(){
    int l,b,h;
    cout <<"Enter l, b, h: ";
    cin >> l>> b>> h;

    int ***ptr = new int**[h];
    for(int i=0;i<h;i++){
        *(ptr+i)=new int*[b];
        for(int j=0;j<b;j++){
            *(*(ptr+i)+j)=new int[l];
        }
    }


    // Deallocation
     for(int i = 0; i < h; i++){
        for(int j = 0; j < b; j++){
            delete[] *(*(ptr+i)+j);
        }
        delete[] *(ptr+i);
    }

    delete[] ptr;
}