#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Print Linked List
void printLL(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Reverse Linked List in groups of k
Node* reverseKGroup(Node* head, int k) {

    // Check whether k nodes are available
    Node* temp = head;
    int count = 0;

    while (temp && count < k) {
        temp = temp->next;
        count++;
    }

    // Less than k nodes -> don't reverse
    if (count < k)
        return head;

    // Reverse first k nodes
    Node* curr = head;
    Node* prev = NULL;

    for (int i = 0; i < k; i++) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // head is now the last node of reversed group
    // Connect it with the next reversed group
    head->next = reverseKGroup(curr, k);

    return prev;
}

int main() {

    // 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);

    int k = 3;

    cout << "Original LL: ";
    printLL(head);

    head = reverseKGroup(head, k);

    cout << "After reversing in groups of " << k << ": ";
    printLL(head);

    return 0;
}