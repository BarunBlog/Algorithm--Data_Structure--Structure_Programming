// Problem: Design a stack that supports push, pop, top,
// and retrieving the minimum element in constant time which is O(1).
// LeetCode: 155. Min Stack

#include<bits/stdc++.h>
using namespace std;

#define n 100000

class MinStack {
    public:
        int* stack;
        int* minStack;
        int stackTop;
        int minStackTop;
        int minElemenet;
    
    MinStack() {
        stack = new int[n];
        minStack = new int[n];
        stackTop = -1;
        minStackTop = -1;
        minElemenet = INT_MAX;
    }

    void push(int value) {
        stack[++stackTop] = value;

        if (value <= minElemenet) {
            minStack[++minStackTop] = value;
            minElemenet = value;
        } else {
            minStack[++minStackTop] = minElemenet;
        }
    }

    void pop() {
        stackTop--;
        minStackTop--;

        if (minStackTop == -1) {
            minElemenet = INT_MAX;
        } else {
            minElemenet = minStack[minStackTop];
        }
    }

    int top() {
        return stack[stackTop];
    }

    int getMin() {
        return minStack[minStackTop];
    }
};

int main() {
    MinStack* minStack = new MinStack();
    
    
    minStack->push(2147483646);
    minStack->push(2147483646);
    minStack->push(2147483645);
    
    cout<<minStack->getMin()<<endl; // return -3
    minStack->pop();
    cout<<minStack->getMin()<<endl; // return -3
}