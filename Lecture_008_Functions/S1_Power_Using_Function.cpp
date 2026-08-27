#include<iostream>
using namespace std;
int power(int a,int b){
    int ans =1;
    for(int i=1;i<=b;i++){
        ans *= a; 
    }
    return ans;
}
int main(){
    int a,b;
    cout << "Enter a and b :" << endl;
    cin >> a >> b;
    int ans = power(a,b);
    cout << "Power of a to the b is: " << ans;
    return 0;
}