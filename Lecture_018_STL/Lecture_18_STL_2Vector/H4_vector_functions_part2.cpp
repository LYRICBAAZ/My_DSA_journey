#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5,6,7,8,9};
    cout << vec.empty() << endl; // It will return boolean value true or false.
    for(int x:vec){
        cout << x << " ";
    }
    cout << endl;

    vec.erase(vec.begin()); // For begining element.
    for(int x:vec){
        cout << x << " ";
    } 
    cout << endl;

    vec.erase(vec.begin()+3); // At any Index.
    for(int x:vec){
        cout << x << " ";
    } 
    cout << endl;

    vec.erase(vec.end()-1);
    for(int x:vec){
        cout << x << " ";
    } 
    cout << endl;

    vec.erase(vec.begin(),vec.begin()+2); // Erase a range of element.
    for(int x:vec){
        cout << x << " ";
    } 
    cout << endl;
}