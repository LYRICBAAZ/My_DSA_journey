#include<bits/stdc++.h>
using namespace std;
int winner(vector<int>&person,int n,int index,int left_person,int  k){
    // Base case
    if(left_person==1){
        for(int i=0;i<n;i++){
            if(person[i]==0){
                return i;
            }
        }
    }

    // find the position of kill
    int kill = (k-1)%left_person;
    while(kill--){
        index = (index+1)%n;
        while(person[index]==1){
            index = (index+1)%n; // skip killed person
        }
    }
    person[index]=1;

    // next alive person
    while(person[index]==1){
        index = (index+1)%n; // skip killed person
    }
    
    return winner(person,n,index,left_person-1,k);
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int k;
    cout <<"Enter the value of kill: ";
    cin >> k;

    vector<int>person(n,0);

    cout << winner(person,n,0,n,k)+1;
    return 0;
}