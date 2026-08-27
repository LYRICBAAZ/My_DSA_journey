#include<iostream>
using namespace std;

bool searchMatrix(int arr[][5], int row, int col, int target)
{
    int r = 0;
    int c = col - 1;

    while(r < row && c >= 0)
    {
        if(arr[r][c] == target)
        {
            return true;
        }
        else if(arr[r][c] > target)
        {
            c--;   // move left
        }
        else
        {
            r++;   // move down
        }
    }

    return false;
}

int main()
{
    int arr[5][5] = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };

    int target;
    cout<<"Enter target: ";
    cin>>target;

    if(searchMatrix(arr,5,5,target))
        cout<<"Element Found";
    else
        cout<<"Element Not Found";
}