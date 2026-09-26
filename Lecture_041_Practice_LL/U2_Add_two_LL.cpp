#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int data) {
        this->data = data;
        this->next = NULL;
    }
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = NULL;
    ListNode* tail;
    int carry = 0;

    while (l1 && l2) {
        int sum = l1->data + l2->data;

        if (head == NULL) {
            head = new ListNode((sum + carry) % 10);
            carry = (sum + carry) / 10;

            l1 = l1->next;
            l2 = l2->next;

            tail = head;
        }
        else {
            ListNode* temp = new ListNode((sum + carry) % 10);
            carry = (sum + carry) / 10;

            tail->next = temp;
            tail = temp;

            l1 = l1->next;
            l2 = l2->next;
        }
    }

    while (l1) {
        ListNode* temp = new ListNode((l1->data + carry) % 10);
        carry = (l1->data + carry) / 10;

        tail->next = temp;
        tail = temp;

        l1 = l1->next;
    }

    while (l2) {
        ListNode* temp = new ListNode((l2->data + carry) % 10);
        carry = (l2->data + carry) / 10;

        tail->next = temp;
        tail = temp;

        l2 = l2->next;
    }

    if (carry) {
        ListNode* temp = new ListNode(carry);
        tail->next = temp;
        tail = temp;
    }

    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // First Linked List: 2 -> 4 -> 3
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Second Linked List: 5 -> 6 -> 4
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    cout << "First Linked List: ";
    printList(l1);

    cout << "Second Linked List: ";
    printList(l2);

    ListNode* result = addTwoNumbers(l1, l2);

    cout << "Result: ";
    printList(result);

    return 0;
}