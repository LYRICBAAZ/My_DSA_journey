#include<bits/stdc++.h>
using namespace std;
void solve(int n,vector<string> &board,vector<vector<string>>&ans,vector<bool>&column,vector<bool>&rightD,vector<bool>&leftD,int row){
    // base case
    if(row==n){
        ans.push_back(board);
        return;
    }
    // Recursive call
    for(int j=0;j<n;j++){
        if(column[j]==0 && rightD[row+j]==0 && leftD[j-row+n-1]==0){
            board[row][j]='Q';
            column[j]=1;
            rightD[row+j]=1;
            leftD[j-row+n-1]=1;
            solve(n,board,ans,column,rightD,leftD,row+1);
            board[row][j]='.';
            column[j]=0;
            rightD[row+j]=0;
            leftD[j-row+n-1]=0;
        }
    }

}
int main(){
    int n;
    cout <<"Enter the size of n:";
    cin >>n;
    vector<string> board(n);
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    board[i].push_back('.'); 

    vector<vector<string>>ans;
    vector<bool>column(n,0);
    vector<bool>rightD(n*2-1,0);
    vector<bool>leftD(n*2-1,0);
    int row = 0;
    solve(n,board,ans,column,rightD,leftD,row);

    for(vector<string> val: ans){
        for(string x:val){
            cout << x << endl;
        }
        cout << endl;
    }
    
    return  0;

}