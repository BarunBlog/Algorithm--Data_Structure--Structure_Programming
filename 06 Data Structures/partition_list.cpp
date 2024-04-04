// Problem: Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.
// You should preserve the original relative order of the nodes in each of the two partitions.
// Leetcode: 86

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


Node* partition(Node* head, int x) {
    if (head == NULL) {
        return head;
    }

    Node* demoLeftNode = new Node(-1);
    Node* demoRightNode = new Node(-1);
    Node* leftPart = NULL;
    Node* rightPart = NULL;

    Node* current = head;

    while (current != NULL) {
        if (current->data < x) {

            if (leftPart == NULL) {
                leftPart = current;
                demoLeftNode->next = leftPart;
            } else {
                leftPart->next = current;
                leftPart = leftPart->next;
            }

        } else {
            
            if (rightPart == NULL) {
                rightPart = current;
                demoRightNode->next = rightPart;
            } else {
                rightPart->next = current;
                rightPart = rightPart->next;
            }
        }

        current = current->next;
    }

    if (demoLeftNode->next == NULL) {
        return demoRightNode->next;
    } else if (demoRightNode->next == NULL) {
        return demoLeftNode->next;
    }
    
    leftPart->next = demoRightNode->next;
    rightPart->next = NULL;


    return demoLeftNode->next;
}

int main() {
    Node* head = NULL;

    int arr[] = {1};

    int len = sizeof(arr) / sizeof(int);

    for (int i=0; i<len; i++) {
        insertAtTail(head, arr[i]);
    }
    
    head = partition(head, 0);

    display(head);
}