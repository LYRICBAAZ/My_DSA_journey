#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    char operation;
    cout << "Enter the operation :";
    cin >> operation;
    switch (operation){
        case '+': cout << "Sum of a and b is : "<<(a+b);
            break;
        case '-': cout << "Substraction of a and b is : "<<(a-b);
            break;
        case '*': cout << "Multiplication of a and b is : "<<(a*b);
            break;
        case '/': cout << "Division of a and b is : "<<(a/b);
            break;
        case '%': cout << "Modulous of a and b is : "<<(a%b);
            break;
        default : cout << "Enter the valid operator :";
    }
    
	return 0;
}