// Problem: Write code to remove duplicates from an unsorted linked list.

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

Node* removeDuplicates(Node* &head) {
    Node* current = head;
    int counter[1000] = {0};

    while (current != NULL) {
        counter[ current->data ]++;
        current = current->next;
    }

    Node* dummyNode = new Node(-1);
    Node* prev = dummyNode;
    current = head;

    while (current != NULL) {

        if ( counter[current->data] > 1 ) {
            counter[current->data]--;

            prev->next = current->next;

        } else {
            prev = current;
        }

        current = current->next;
    }

    return dummyNode->next;
}

int main() {
    Node* head = NULL;

    int arr[] = {1,4,2,3,3,2,1,5,6};

    int len = sizeof(arr) / sizeof(int);

    for (int i=0; i<len; i++) {
        insertAtTail(head, arr[i]);
    }

    Node* distinctList = removeDuplicates(head);

    display(distinctList);
}