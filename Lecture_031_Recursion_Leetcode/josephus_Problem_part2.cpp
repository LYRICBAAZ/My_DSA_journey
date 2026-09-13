 #include<bits/stdc++.h>
 using namespace std;
 int winner(int k,int index){
    // Base case 
    if(index==1){
        return 0;
    }

    // Recursive call
    return (winner(k,index-1)+k)%index;

 }
 int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int k;
    cout <<"Kill Value is: ";
    cin >> k;
    cout << winner(k,n)+1;
    return 0;
 }