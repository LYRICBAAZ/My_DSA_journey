#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode() {
        val = 0;
        next = NULL;
    }

    ListNode(int x) {
        val = x;
        next = NULL;
    }

    ListNode(int x, ListNode* next) {
        val = x;
        this->next = next;
    }
};

ListNode* merge(ListNode* left, ListNode* right) {

    ListNode* head = new ListNode(0);
    ListNode* tail = head;

    while(left && right) {

        if(left->val <= right->val) {
            tail->next = left;
            tail = tail->next;
            left = left->next;
            tail->next = NULL;
        }
        else {
            tail->next = right;
            tail = tail->next;
            right = right->next;
            tail->next = NULL;
        }
    }

    if(left) {
        tail->next = left;
    }
    else {
        tail->next = right;
    }

    ListNode* temp = head;
    head = head->next;
    delete temp;

    return head;
}

ListNode* findMid(ListNode* head) {

    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

ListNode* mergeSort(ListNode* head) {

    if(head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* mid = findMid(head);

    ListNode* left = head;
    ListNode* right = mid->next;

    mid->next = NULL;

    left = mergeSort(left);
    right = mergeSort(right);

    ListNode* result = merge(left, right);

    return result;
}

ListNode* sortList(ListNode* head) {
    head = mergeSort(head);
    return head;
}

void printList(ListNode* head) {

    while(head) {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    // 4 -> 2 -> 1 -> 3
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    cout << "Before sorting: ";
    printList(head);

    head = sortList(head);

    cout << "After sorting: ";
    printList(head);

    return 0;
}