// Problem: You are given the head of a linked list. Delete the middle node, and return
// the head of the modified linked list.
// Leetcode: 2095

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int val){
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

int getLength(Node* head) {
    Node* current = head;
    int len = 0;
    
    while(current != NULL) {
        current = current->next;
        len++;
    }

    return len;
}

Node* deleteMiddleNode(Node* head) {
    int middleIndex = getLength(head) / 2;

    Node* dummyNode = new Node(-1);
    Node* current = head;
    Node* prev = dummyNode;

    prev->next = current;

    int i = 0;
    while(current != NULL) {
        if (i == middleIndex) {
            prev->next = current->next;
            return dummyNode->next;
        } else {
            prev = current;
            current = current->next;
        }
        i++;
    }

    return dummyNode->next;
}

int main() {
    Node* head = NULL;

    int arr[] = {1,3,4,7,1,2,6};

    int len = sizeof(arr) / sizeof(int);

    for (int i=0; i<len; i++) {
        insertAtTail(head, arr[i]);
    }
    
    head = deleteMiddleNode(head);

    display(head);
}