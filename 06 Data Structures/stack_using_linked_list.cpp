#include<bits/stdc++.h>
using namespace std;

class StackNode {
    public:
        int data;
        StackNode* next;
        
        StackNode(int val) {
            this->data = val;
            this->next = NULL;
        }
};

class MyStack {
    StackNode* top;

    public:
        MyStack() {
            top = NULL;
        }

        void push(int data) {
            StackNode* newNode = new StackNode(data);

            newNode->next = top;
            top = newNode;
        }

        int pop() {
            if (top == NULL) {
                cout<<"No element found to pop"<<endl;
                return -1;
            }

            int data = top->data;

            top = top->next;
            return data;
        }

        int peek() {
            if (top == NULL) {
                cout<<"No element found to pop"<<endl;
                return -1;
            }

            return top->data;
        }

        bool isEmpty() {
            return top == NULL;
        }

        void display() {
            StackNode* current = top;
            
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
    // Creating a stack
    MyStack st;
 
    // Push the elements of stack
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);

    st.display();

    // Poping the elements from the stack
    st.pop();
    st.pop();

    st.display();

    cout<<st.isEmpty()<<endl;
}