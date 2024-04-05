// Problem: You are given two non-empty linked lists representing two non-negative
// integers. The digits are stored in reverse order, and each of their nodes contains
// a single digit. Add the two numbers and return the sum as a linked list.
// Cracking The Coding Interview Problem 2.5

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
    Node* current1 = l1;
    int multiplier = 1;
    int number1 = 0;

    while(current1 != NULL) {
        number1 += current1->data * multiplier;
        multiplier *=  10;

        current1 = current1->next;
    }

    Node* current2 = l2;
    multiplier = 1;
    int number2 = 0;

    while(current2 != NULL) {
        number2 += current2->data * multiplier;
        multiplier *=  10;

        current2 = current2->next;
    }

    int sum = number1 + number2;

    Node* resultList = NULL;
    Node* current = NULL;

    if (sum == 0) {
        resultList = new Node(0);
    }

    while(sum != 0) {

        Node* newNode = new Node(sum % 10);

        if (current == NULL) {
            resultList = newNode;
            current = resultList;
        } else {
            current->next = newNode;
            current = current->next;
        }

        sum = sum / 10;
    }

    return resultList;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    int arr1[] = {0};
    int arr2[] = {0};

    int len = sizeof(arr1) / sizeof(int);

    for (int i=0; i<len; i++) {
        insertAtTail(head1, arr1[i]);
        insertAtTail(head2, arr2[i]);
    }

    Node* resultList = addTwoLists(head1, head2);

    display(resultList);
}