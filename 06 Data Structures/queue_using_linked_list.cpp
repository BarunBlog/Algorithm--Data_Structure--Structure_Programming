#include<bits/stdc++.h>
using namespace std;

class QueueNode {
    public:
        int data;
        QueueNode* next;

        QueueNode(int val) {
            this->data = val;
            this->next = NULL;
        }
};

class MyQueue {
    public:
        QueueNode* front;
        QueueNode* rear;

        MyQueue() {
            front = NULL;
            rear = NULL;
        }

        void add(int data) {
            QueueNode* newNode = new QueueNode(data);

            if (rear == NULL) {
                front = newNode;
            } else {
                rear->next = newNode;
            }

            rear = newNode;
        }

        int remove() {
            if (front == NULL) {
                cout<<"The queue is empty"<<endl;
                return -1;
            }

            int data = front->data;
            
            front = front->next;

            if (front == NULL) {
                rear = NULL;
            }
            return data;
        }

        int peek() {
            if (front == NULL) {
                cout<<"The queue is empty"<<endl;
                return -1;
            }

            return front->data;
        }

        bool isEmpty() {
            return front == NULL;
        }

        void display() {
            QueueNode* current = front;

            while(current != NULL) {
                cout<<current->data;

                current = current->next;

                if (current != NULL) {
                    cout<<" -> ";
                }
            }
            cout<<endl;
        }
        
};

int main() {
    MyQueue mq;

    mq.add(11);
    mq.add(22);
    mq.add(33);
    mq.add(44);

    mq.display();

    mq.remove();

    mq.display();

    cout<<mq.peek()<<endl;
}