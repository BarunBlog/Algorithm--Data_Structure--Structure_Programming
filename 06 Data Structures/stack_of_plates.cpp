#include<bits/stdc++.h>
using namespace std;


class DinnerPlates {
    vector<vector<int>>dinnerPlateStack;
    set<int>popedIndexes;
    int capacity;


    public:

        void printSet(set<int> mySet) {
            cout << "{";
            for (auto it = mySet.begin(); it != mySet.end(); it++) {
                cout << *it;
                if (next(it) != mySet.end()) {
                    cout << ", ";
                }
            }
            cout << "}" <<endl;
        }

        void printVector(vector<vector<int>>myVec) {
            cout<< "[";

            for (int i = 0; i < myVec.size(); i++) {
                cout << "{";
                for (auto j = 0; j < myVec[i].size(); j++) {
                    cout<<myVec[i][j];

                    if (j != myVec[i].size() - 1) {
                        cout<< ", ";
                    }
                }
                cout<< "}";

                if (i != myVec.size() - 1) {
                    cout<< ", ";
                }
            }

            cout<< "]" << endl;
        }


        DinnerPlates(int capacity) {
            this->capacity = capacity;
        }

        void push(int val) {
            if (popedIndexes.size() > 0) {
                int leftMostIndex = *(popedIndexes.begin());

                dinnerPlateStack[leftMostIndex].push_back(val);

                if (dinnerPlateStack[leftMostIndex].size() == capacity) {
                    // Remove the left most element from the set
                    popedIndexes.erase(popedIndexes.begin());
                }
            } else {
                if (dinnerPlateStack.empty()) {
                    // Create new sub stack
                    dinnerPlateStack.push_back({val});
                } else {
                    int subStacksize = dinnerPlateStack.back().size();

                    if (subStacksize == capacity) {
                        // Create new sub stack
                        dinnerPlateStack.push_back({val});
                    } else {
                        dinnerPlateStack.back().push_back(val);
                    }
                }
            }

            printVector(dinnerPlateStack);
        }

        int pop() {
            int size = dinnerPlateStack.size();

            cout<<"size is: "<<size<<endl;

            if (size == 0) {
                return -1;
            } else {
                int data = dinnerPlateStack[size-1].back();

                dinnerPlateStack[size-1].pop_back();

                popedIndexes.insert(size-1);

                while(!dinnerPlateStack.empty() && dinnerPlateStack.back().empty()) {
                    // Erasing the empty row
                    dinnerPlateStack.erase(dinnerPlateStack.begin() + dinnerPlateStack.size() - 1);
                }

                printVector(dinnerPlateStack);

                return data;
            }
        }

        int popAtStack(int index) {
            if (index >= dinnerPlateStack.size()) {
                return -1;
            }

            popedIndexes.insert(index);

            int data = dinnerPlateStack[index].back();

            dinnerPlateStack[index].pop_back();

            // cout<<"reduced size: "<<dinnerPlateStack.size()<<endl;

            // // If pop in the back of the vector and its size became zero then erasing the row
            // if (index == dinnerPlateStack.size() - 1 && dinnerPlateStack[index].size() == 0) {
            //     dinnerPlateStack.erase(dinnerPlateStack.begin() + index);
            // }

            printVector(dinnerPlateStack);

            return data;
        }
};

int main() {

    DinnerPlates d = DinnerPlates(1);

    d.push(1);
    d.push(2);

    d.popAtStack(1);

    d.pop();

    d.push(1);
    d.push(2);

    d.pop();
    d.pop();

}
