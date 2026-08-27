#include<iostream>
#include<stack>
using namespace std;

string removeDuplicates(string s) {
    stack<char> st;

    for(char ch : s){
        if(!st.empty() && st.top() == ch){
            st.pop();     // duplicate remove
        }
        else{
            st.push(ch);
        }
    }

    string ans = "";
    while(!st.empty()){
        ans = st.top() + ans;
        st.pop();
    }
    return ans;
}

int main(){
    string s = "abbaca";
    cout << removeDuplicates(s);
}


/*
BINA STACK KR.....

string removeDuplicates(string s) {
    string ans = "";

    for(char ch : s){
        if(!ans.empty() && ans.back() == ch)
            ans.pop_back();
        else
            ans.push_back(ch);
    }
    return ans;
}

*/