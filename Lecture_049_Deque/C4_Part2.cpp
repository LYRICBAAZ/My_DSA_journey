#include<bits/stdc++.h>
using namespace std;
int minKBitFlips(vector<int>& nums, int k) {
    int flip = 0;
    queue<int>q;
    for(int i=0;i<nums.size();i++){
        if(!q.empty() && q.front()<i){
            q.pop();
        }
        if(q.size()%2==nums[i]){
            if(i+k-1>=nums.size()){
                return -1;
            }
            q.push(i+k-1);
            flip++;
        }
    }
    return flip;
}
int main(){
    vector<int>v={0,0,0,1,0,1,1,0};
    int k = 3;

    cout << minKBitFlips(v,k);

    return 0;
}