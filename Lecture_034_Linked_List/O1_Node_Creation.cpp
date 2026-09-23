#include<iostream>
using namespace std;
class NODE{
    public:
    int data;
    NODE * next;
    NODE(int value){
        data = value;
        next = NULL;
    }

    void print(){
        cout << data << endl;
        cout << next << endl;
    }
};
int main(){
    NODE A1(5);                // Statically linked list creation;
    NODE * A2;
    A2 = new NODE(4);          // Dynamically linked list
    A1.print();
    A2->print();     // (*A2).print();
}