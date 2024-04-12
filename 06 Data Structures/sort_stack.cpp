// Problem: Write a program to sort a stack such that the smallest items are on the top.
// you can use an additional temporary stack, but you may not copy the elements into
// any other data structure. The stack supports the following operations, push, pop, peak, an isEmpty

#include<bits/stdc++.h>
using namespace std;

#define n 1000


class MyStack {
    int* arr;
    int top;

    public:
        MyStack() {
            arr = new int[n];
            top = -1;
        }

        void push(int val) {
            if (top == n-1) {
                cout<<"Stack overflow"<<endl;
                return;
            }

            arr[++top] = val;
        }

        int pop() {
            if (top == -1) {
                cout<<"No elements found to pop"<<endl;
                return -1;
            }

            return arr[top--];
        }

        int peak() {
            if (top == -1) {
                cout<<"No elements found to peak"<<endl;
                return -1;
            }

            return arr[top];
        }

        bool isEmpty() {
            return top == -1;
        }
};

MyStack sortStack(MyStack st) {
    MyStack tmpSt;

    // O(n*n) algorithm to sort the stack
    // with O(n) space complexity
    while(!st.isEmpty()) {
        if (tmpSt.isEmpty() || st.peak() >= tmpSt.peak()) {
            tmpSt.push(st.pop());
        } else {
            int data = st.pop();

            while(!tmpSt.isEmpty() && data <= tmpSt.peak()) {
                st.push(tmpSt.pop());
            }

            tmpSt.push(data);
        }
    }

    // Storing from temp to original stack. So that smallest item come to the top.
    while(!tmpSt.isEmpty()) {
        st.push(tmpSt.pop());
    }

    return st;
}

void displayStack(MyStack st) {
    while(!st.isEmpty()) {
        cout<<st.pop();

        if (!st.isEmpty()) {
            cout<<", ";
        }
    }
    
    cout<<endl;
}

int main() {
    MyStack st;

    st.push(34);
    st.push(3);
    st.push(31);
    st.push(98);
    st.push(92);
    st.push(23);

    st = sortStack(st);

    displayStack(st);
    
}