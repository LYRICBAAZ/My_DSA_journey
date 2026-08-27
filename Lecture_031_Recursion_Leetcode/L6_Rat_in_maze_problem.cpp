#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[][8],int visited[][8],vector<string> &ans,string &output,int row,int col){
    //Base case
    if(row==5 && col==7){
        ans.push_back(output);
        return;
    }

    visited[row][col]=1;

    // For up
    if((row-1)>=0 && arr[row-1][col]==1 && visited[row-1][col]==0){
        output.push_back('U');
        solve(arr,visited,ans,output,row-1,col);
        output.pop_back();
    }

    // For Down
    if((row+1)<6 && arr[row+1][col]==1 && visited[row+1][col]==0){
        output.push_back('D');
        solve(arr,visited,ans,output,row+1,col);
        output.pop_back();
    }

    // For Left
    if((col-1)>=0 && arr[row][col-1]==1 && visited[row][col-1]==0){
        output.push_back('L');
        solve(arr,visited,ans,output,row,col-1);
        output.pop_back();
    }

    // For Right
    if((col+1)<8 && arr[row][col+1]==1 && visited[row][col+1]==0){
        output.push_back('R');
        solve(arr,visited,ans,output,row,col+1);
        output.pop_back();
    }


    // Backtracking 
    visited[row][col]=0;
}
int main(){
    int arr[6][8]={{1,1,1,1,1,1,0,0},{1,0,0,1,0,1,0,0},{1,1,0,0,0,1,0,0},{0,1,1,1,1,1,1,0},{0,0,0,0,1,0,1,0},{0,0,0,0,1,1,1,1}};
    
    if(arr[0][0] == 0) return 0;

    int visited[6][8];
    for(int i=0;i<6;i++){
        for(int j=0;j<8;j++){
            visited[i][j]=0;
        }
    }


    string output="";
    vector<string> ans;
    int row = 0;
    int col = 0;

    solve(arr,visited,ans,output,row,col);

    // Printing
    for(auto y:ans){
        for(auto x:y){
            cout << x;
        }
        cout <<endl;
    }

    return 0;

}