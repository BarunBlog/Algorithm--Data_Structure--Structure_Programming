#include<bits/stdc++.h>
using namespace std;

class DinnerPlates {
    vector<stack<int>>dinnerPlateStack;
    set<int>popedIndexes;
    int capacity;

    public:
        DinnerPlates(int capacity) {
            this->capacity = capacity;
        }

        void push(int val) {
            if (popedIndexes.size() > 0) {
                int leftMostIndex = *(popedIndexes.begin());

                if (dinnerPlateStack[leftMostIndex].empty() && dinnerPlateStack[leftMostIndex].size() == 0) {
                    // Create new sub stack
                    dinnerPlateStack.push_back(stack<int>({val}));
                } else {
                    dinnerPlateStack[leftMostIndex].push(val);
                }

                if (dinnerPlateStack[leftMostIndex].size() == capacity) {
                    // Remove the left most element from the set
                    popedIndexes.erase(popedIndexes.begin());
                }
            } else {
                if (dinnerPlateStack.empty()) {
                    // Create new sub stack
                    dinnerPlateStack.push_back(stack<int>({val}));
                } else {
                    int subStacksize = dinnerPlateStack.back().size();

                    if (subStacksize == capacity) {
                        // Create new sub stack
                        dinnerPlateStack.push_back(stack<int>({val}));
                    } else {
                        dinnerPlateStack.back().push(val);
                    }
                }
            }
        }

        int pop() {
            int top = dinnerPlateStack.size();

            if (top == 0) {
                return -1;
            } else {
                int data = dinnerPlateStack[top-1].top();

                dinnerPlateStack[top-1].pop();

                popedIndexes.insert(top-1);

                if (dinnerPlateStack[top-1].size() == 0) {
                    // Erasing the empty row
                    dinnerPlateStack.erase(dinnerPlateStack.begin() + top-1);
                }

                return data;
            }
        }

        int popAtStack(int index) {
            if (index >= dinnerPlateStack.size()) {
                return -1;
            }

            popedIndexes.insert(index);

            int data = dinnerPlateStack[index].top();

            dinnerPlateStack[index].pop();

            return data;
        }
};

int main() {
    DinnerPlates d = DinnerPlates(2);

    d.push(1);
   

    cout<<"poped: "<<d.pop()<<endl;
    cout<<"poped stack: "<<d.popAtStack(0)<<endl;

    d.push(6);
    cout<<"poped stack: "<<d.popAtStack(1)<<endl;
    cout<<"poped stack: "<<d.popAtStack(0)<<endl;

}