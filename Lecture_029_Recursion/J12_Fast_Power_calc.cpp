#include<iostream>
using namespace std;
int powerCalc(int a, int b){

    // Base Case
    if( b==0 ){
        return 1;
    }
    if(b == 1){
        return a;
    }

    // Processing 

    int half = powerCalc(a,b/2);

    if(b&1){
        return (a*half*half);
    }
    else{
        return (half*half);
    }
}
int main(){
    int a,b;
    cout <<"Enter a and b: "<< endl;
    cin >> a >> b;
    cout << powerCalc(a,b);

    return 0;
    
}