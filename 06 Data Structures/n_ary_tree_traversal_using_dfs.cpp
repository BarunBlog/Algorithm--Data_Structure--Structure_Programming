/*
Problem:
            1
          /   \
         2     3
        /|\   / \
       4 5 6 7   8

Input:
    8 7
    1 2
    1 3
    2 4
    2 5
    2 6
    3 7
    3 8
*/


#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        vector<Node*>children;

        Node(int data) {
            this->data = data;
        }
};

void dfs(Node* root) {
    cout<<root->data<<" ";
    
    for(Node* child: root->children) {
        dfs(child);
    }
}


int main() {
    // Preparing the n ary tree -----------------------------------------------------------------------------
    Node* root = new Node(1);

    root->children.push_back(new Node(2));
    root->children.push_back(new Node(3));

    root->children[0]->children.push_back(new Node(4));
    root->children[0]->children.push_back(new Node(5));
    root->children[0]->children.push_back(new Node(6));

    root->children[1]->children.push_back(new Node(7));
    root->children[1]->children.push_back(new Node(8));
    
}