#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int i = 0;
    int idx = 0;   // write pointer

    while(i < n){
        char curr = chars[i];
        int count = 0;

        while(i < n && chars[i] == curr){
            i++;
            count++;
        }

        chars[idx++] = curr;

        if(count > 1){
            string num = to_string(count);
            for(char c : num){
                chars[idx++] = c;
            }
        }
    }
    return idx;
}

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int newLen = compress(chars);

    cout << "Compressed array: ";
    for(int i=0;i<newLen;i++)
        cout << chars[i] << " ";

    cout << "\nLength = " << newLen;
}