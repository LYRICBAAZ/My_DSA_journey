#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5,6,7,8,9};
    // vec.insert(3,100); (Position,value)
    // we should give position in STL formate not directly write index;

    vec.insert(vec.begin()+2,100);
    for(int x:vec){
        cout << x <<" ";
    }
    cout << endl;

    cout << *(vec.begin()) << endl;
    cout << *(vec.end()-1) << endl;

    // vec.begin() and vec.end() address batata hai.
    vec.clear(); // clear whole vector;
    cout << vec.size();
}