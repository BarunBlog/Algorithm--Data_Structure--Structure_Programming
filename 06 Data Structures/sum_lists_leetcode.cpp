// Problem: You are given two non-empty linked lists representing two non-negative
// integers. The digits are stored in reverse order, and each of their nodes contains
// a single digit. Add the two numbers and return the sum as a linked list.
// LeetCode 2

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = NULL;
        }
};

void insertAtTail(Node* &head, int value) {
    Node* current = head;
    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    while(current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

void display(Node* head) {
    Node* current = head;

    while(current != NULL) {
        cout<<current->data<<" ";
        current = current->next;
    }

    cout<<endl;
}

Node* addTwoLists(Node* l1, Node* l2) {
    
    Node* resultList = NULL;
    Node* current = NULL;
    int carry = 0;
    int sum;

    while(l1 != NULL && l2 != NULL) {

        sum = (l1->data + l2->data + carry) % 10;
        carry = (l1->data + l2->data + carry) / 10;

        Node* newNode = new Node(sum);

        if (current == NULL) {
            resultList = newNode;
            current = resultList;
        } else {
            current->next = newNode;
            current = current->next;
        }

        if (l1->next == NULL && l2->next != NULL) {
            Node* zeroNode = new Node(0);
            l1->next = zeroNode;
        } else if (l2->next == NULL && l1->next != NULL) {
            Node* zeroNode = new Node(0);
            l2->next = zeroNode;
        }

        l1 = l1->next;
        l2 = l2->next;
    }

    if (carry != 0) {
        Node* newNode = new Node(carry);
        current->next = newNode;
    }

    return resultList;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    int arr1[] = {2,4,3};
    int arr2[] = {4,1,8,1,2,3};

    int len1 = sizeof(arr1) / sizeof(int);
    int len2 = sizeof(arr2) / sizeof(int);

    for (int i=0; i<len1; i++) {
        insertAtTail(head1, arr1[i]);
    }

    for (int i=0; i<len2; i++) {
        insertAtTail(head2, arr2[i]);
    }

    Node* resultList = addTwoLists(head1, head2);

    display(resultList);
}