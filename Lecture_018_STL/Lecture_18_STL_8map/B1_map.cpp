#include<iostream>
#include<map>
using namespace std;
int main(){
    // three types of initialization
    map<string,int>m{
        {"shubham",18},
        {"nitish",20}
    };

    m["satish"]=30;
    m["aman"]=21;

    m.insert({"s",1});
    m.emplace("d",2);

    // accessing
    cout << m["shubham"]<<endl;

    for(auto p : m){
    cout << p.first << " " << p.second << endl;
    }

    if(m.find("shubham")!=m.end()){
        cout << "found the element" << endl;
    }
    else{
        cout << "not found" << endl;
    }
    /*
    ⚠️ sirf check karne ke liye cout << mp[key]; use karna kabhi-kabhi problem create kar sakta hai.
    Uske liye find() ya count() use karo.

    map ek associative container hai jo unique key-value pairs ko key ke sorted order mein store karta hai, aur generally Red-Black Tree ki help se O(log n) insertion, search aur deletion provide karta hai.
    */ 


/*
STL Containers
│
├── 1. Sequence Containers
│
├── 2. Associative Containers
│
├── 3. Unordered Associative Containers
│
└── 4. Container Adapters
*/

    /*
    vector      → sequential container
    deque       → sequential container
    list        → sequential container

    map         → associative container
    set         → associative container
    unordered_map → unordered associative container

    stack       → container adapter
    queue       → container adapter
    priority_queue → container adapter
    */

/*
|    features        | `map`          | `unordered_map` |
| ------------------ | -------------- | --------------- |
| Internal structure | Red-Black Tree | Hash Table      |
| Sorted keys        | ✅ Yes         | ❌ No          |
| Search             | `O(log n)`     | Average `O(1)`  |
| Insert             | `O(log n)`     | Average `O(1)`  |
| Delete             | `O(log n)`     | Average `O(1)`  |
| `lower_bound()`    | ✅             | ❌             |
| `upper_bound()`    | ✅             | ❌             |

*/   

}