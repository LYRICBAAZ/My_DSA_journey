#include<iostream>
using namespace std;
bool checkEqual(int arr1[],int arr2[]){
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string str = "eidbaooo";
    string finder = "ab";
    if(finder.length()>str.length()){
        cout << "Permutation not found";
        return 0;
    }
    int finderCount[26]={0};
    for(int i=0;i<finder.length();i++){
        finderCount[finder[i]-'a']++;
    }
    for(int i=0;i<=str.length()-finder.length();i++){
        int window[26]={0};
        for(int j=i;j<i+finder.length() && j< str.length();j++){
            window[str[j]-'a']++;
        }
        if(checkEqual(window,finderCount)){
            cout <<"Permutationn find";
            return 0;
        }
    }
    cout<<"Permutation not found";
    return 0;

    // This is brute Forse Approach.....


    // Optimal is.....
/*
bool checkInclusion(string s1, string s2) {

        int n=s1.size();
        int m =s2.size();
        if(n>m){
            return false;
        }
        
        vector<int> freq1(26,0);
        vector <int> freq2(26,0);

        for(int i=0;i<n;i++){
            freq1[s1[i]-'a']++;
        }
        int i=0;
        int j=0;

        while(j<m){
            freq2[s2[j]-'a']++;

            if(j-i+1>n){
                freq2[s2[i]-'a']--;
                i++;
            }
            if(freq1==freq2){
                return true;
            }
            j++;
        }
        return false;
    }    
*/

}