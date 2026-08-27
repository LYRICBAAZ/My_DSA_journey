#include<iostream>
using namespace std;
int totalWays(int n){
    if(n == 0 || n==1){
        return 1;
    }
    return (totalWays(n-1)+totalWays(n-2));
}
int main(){
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout <<"Total ways to climb on N is: "<< totalWays(n);

}