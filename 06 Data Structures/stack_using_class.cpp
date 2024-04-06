
#include<bits/stdc++.h>
using namespace std;

#define n 1000

class myStack {
    int* arr;
    int top;

    public:
        myStack() {
            arr = new int[n];
            top = -1;
        }

        void push(int value) {
            if (top == n-1) {
                cout<<"Stack overflow"<<endl;
                return;
            }

            arr[++top] = value;
        }

        int pop() {
            if (top == -1) {
                cout<<"No element found to pop"<<endl;
                return -1;
            }

            return arr[top--];
        }

        int peek() {
            if (top == -1) {
                cout<<"No element found"<<endl;
                return -1;
            }

            return arr[top];
        }

        bool isEmpty() {
            return top == -1;
        }
};

int main() {
    myStack st;

    st.push(1);
    st.push(2);
    st.pop();

    cout<<st.peek()<<endl;
    
    cout<<st.isEmpty()<<endl;
}