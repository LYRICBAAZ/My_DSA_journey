#include<iostream>
using namespace std;
void update(int &x){
    x++;
}
int main(){
    int n = 5;
    cout << n << endl;
    update(n);
    cout << n << endl;
}