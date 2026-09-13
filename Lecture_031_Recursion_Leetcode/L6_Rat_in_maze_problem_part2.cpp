#include<iostream>
#include<vector>
using namespace std;

vector<int> rows = {-1,1,0,0};
vector<int> cols = {0,0,-1,1};
vector<char> str = {'U','D','L','R'};

void solve(vector<vector<int>>&arr,vector<string> &ans,string &output,int row,int col){
    //Base case
    if(row==arr.size()-1 && col==arr[0].size()-1){
        ans.push_back(output);
        return;
    }

    arr[row][col]=0;  // Visited

    for(int i=0;i<4;i++){
        if((row+rows[i])>=0 && (row+rows[i])<arr.size() && (col+cols[i])>=0 && (col+cols[i]) <arr[0].size() &&  arr[row+rows[i]][col+cols[i]]==1){
            output.push_back(str[i]);
            solve(arr,ans,output,row+rows[i],col+cols[i]);
            output.pop_back();
        }
    }
    
    // Backtracking
    arr[row][col]=1;

}
int main(){
    vector<vector<int>>arr={{1,1,1,1,1,1,0,0},
                            {1,0,0,1,0,1,0,0},
                            {1,1,0,0,0,1,0,0},
                            {0,1,1,1,1,1,1,0},
                            {0,0,0,0,1,0,1,0},
                            {0,0,0,0,1,1,1,1}};


    if(arr[0][0] == 0 || arr[arr.size()-1][arr[0].size()-1] == 0 ) return 0;

    string output="";
    vector<string> ans;
    int row = 0;
    int col = 0;

    solve(arr,ans,output,row,col);

    // Printing
    for(auto y:ans){
        for(auto x:y){
            cout << x;
        }
        cout <<endl;
    }

    return 0;

}