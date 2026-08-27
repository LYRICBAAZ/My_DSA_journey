#include<iostream>
using namespace std;
void update(int* ptr){
    (*ptr)++;
    *ptr = *ptr + 1;
}
int main(){
    int i = 5;
    cout << i << endl;
    update(&i);
    cout << i << endl;
}
