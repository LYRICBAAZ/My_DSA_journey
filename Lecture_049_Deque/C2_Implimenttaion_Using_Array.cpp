#include <bits/stdc++.h>
using namespace std;

class Deque {
    int *arr;
    int size;
    int front;
    int rear;
    int count;

public:

    // Constructor
    Deque(int n) {
        size = n;
        arr = new int[size];

        front = -1;
        rear = -1;
        count = 0; 
    }

    // Push Front
    void Push_front(int x) {

        if(count == size) {
            cout << "Deque Overflow" << endl;
            return;
        }

        // First element
        if(count == 0) {
            front = rear = 0;
        }
        else {
            front = (front - 1 + size) % size;
        }

        arr[front] = x;
        count++;

        cout << "Pushed in front: " << x << endl;
    }

    // Push Back
    void Push_back(int x) {

        if(count == size) {
            cout << "Deque Overflow" << endl;
            return;
        }

        // First element
        if(count == 0) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = x;
        count++;

        cout << "Pushed in rear: " << x << endl;
    }

    // Pop Front
    void Pop_front() {

        if(count == 0) {
            cout << "Deque Underflow" << endl;
            return;
        }

        cout << "Pop in Front: " << arr[front] << endl;

        if(count == 1) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }

        count--;
    }

    // Pop Back
    void Pop_back() {

        if(count == 0) {
            cout << "Deque Underflow" << endl;
            return;
        }

        cout << "Pop in Back: " << arr[rear] << endl;

        if(count == 1) {
            front = rear = -1;
        }
        else {
            rear = (rear - 1 + size) % size;
        }

        count--;
    }

    // Get Front
    int Start() {

        if(count == 0) {
            cout << "Deque Underflow" << endl;
            return -1;
        }

        cout << "Element in Front: " << arr[front] << endl;
        return arr[front];
    }

    // Get Rear
    int End() {

        if(count == 0) {
            cout << "Deque Underflow" << endl;
            return -1;
        }

        cout << "Element in Rear: " << arr[rear] << endl;
        return arr[rear];
    }

    // Destructor
    ~Deque() {
        delete[] arr;
    }
};

int main() {

    Deque d(5);

    d.Pop_back();

    d.Push_back(4);
    d.Push_back(10);
    d.Push_front(9);

    d.Start();
    d.End();

    d.Pop_front();
    d.Pop_back();

    d.Start();
    d.End();

    return 0;
}