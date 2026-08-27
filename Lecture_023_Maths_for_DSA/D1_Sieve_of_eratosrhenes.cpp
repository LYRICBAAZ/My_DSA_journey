#include<iostream>
#include<vector>
using namespace std;

vector<bool>isPrime(int n){
    vector<bool>vec1(n+1,true);
    vec1[0]=vec1[1]=0;
    for(int i=2;i<n;i++){
        if(vec1[i]){
            for(int j=i*i;j<=n;j+=i){
                vec1[j]=0;
            }
        }
    }
    for(int i = 2; i <= n; i++) {
        if(vec1[i]){
            cout << i << " ";
        }
    }
    return vec1;
}
int main(){
    // vector<int>vec={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    // isPrime(vec,51);

    int n;
    cin >> n;
    isPrime(n);

}