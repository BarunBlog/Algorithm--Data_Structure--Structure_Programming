// Problem: Implement an algorithm to find the Kth to last element of a singly linked list.
// This means finding the node that is K positions away from the last node in the list.
// Here 1 <= k <= len(list)

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

int getKthValueToLast(Node* head, int k) {
    Node* current = head;
    Node* prev = head;

    // Fast forwarding current to kth element from first node
    int i = k - 1;
    while (i-- != 0){
        current = current->next;
    }


    while(current->next != NULL) {
        current = current->next;
        prev = prev->next;
    }
    

    return prev->data;
}

void display(Node* head) {
    Node* current = head;

    while(current != NULL) {
        cout<<current->data<<" ";
        current = current->next;
    }

    cout<<endl;
}


int main() {
    Node* head = NULL;

    int arr[] = {1,4,2,3,3,2,1,5,6};

    int len = sizeof(arr) / sizeof(int);

    for (int i=0; i<len; i++) {
        insertAtTail(head, arr[i]);
    }

    cout<<getKthValueToLast(head, 8)<<endl;
    

    //display(head);
}