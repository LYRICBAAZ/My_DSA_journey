#include<bits/stdc++.h>
using namespace std;
void display(queue<int>q){ // q pass by value hai..
    while(!q.empty()){
        if(q.front()<0){
        cout << q.front()<<" ";
        return;
        }
        q.pop();
    }
    cout << endl;
}
int main(){
    int arr[]={2,-3,-4,-2,7,8,9,-10};
    int n = 8;
    int k = 3;
    queue<int>q;
    int num;
    for(int i=0;i<k-1;i++){
        q.push(arr[i]);
    }
    for(int i=k-1;i<n;i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }

    return 0;
}