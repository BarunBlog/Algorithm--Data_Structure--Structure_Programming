
#include<bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
        int val;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int data) {
            val = data;
            left = NULL;
            right = NULL;
        }
};

void displayPreorder(TreeNode* root) {
    if (root == NULL){
        return;
    }

    cout<<root->val<<" ";

    displayPreorder(root->left);
    displayPreorder(root->right);
}

TreeNode* createTree() {
    TreeNode* root = new TreeNode(1);

    TreeNode* child1 = new TreeNode(2);
    TreeNode* child2 = new TreeNode(3);

    TreeNode* grandChild1 = new TreeNode(4);
    TreeNode* grandChild2 = new TreeNode(5);
    TreeNode* grandChild3 = new TreeNode(6);
    TreeNode* grandChild4 = new TreeNode(7);

    root->left = child1;
    root->right = child2;

    child1->left = grandChild1;
    child1->right = grandChild2;

    child2->left = grandChild3;
    child2->right = grandChild4;

    return root;
}

/// Applying BFS to calculate the maxDepth of the tree
int maxDepth(TreeNode* root) {

    if (root == NULL)
        return 0;

    int level = 0;
    queue<TreeNode*> myqueue;
    TreeNode* node;

    myqueue.push(root);

    while(!myqueue.empty()) {

        int current_size = myqueue.size();

        for(int i=0; i < current_size ; i++) {
            node = myqueue.front();
            myqueue.pop();

            if (node->left) {
                myqueue.push(node->left);
            }

            if (node->right) {
                myqueue.push(node->right);
            }
        }
        level++;
    }

    return level;
}


int main()
{
    TreeNode* root1 = createTree();

    //displayPreorder(root1);

    cout<<maxDepth(root1)<<endl;

}
