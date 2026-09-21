#include<iostream>
using namespace std;
void solve(char *ptr1,char *ptr2){
    while((*ptr1=*ptr2)){
        ptr1++;
        ptr2++;
    }
}
int main(){
    char c[]="Rohan";
    char d[]="Mohan";

    char *ptr1 = c;
    char *ptr2 = d;

    solve(ptr1,ptr2); 

    cout << c << endl;

}