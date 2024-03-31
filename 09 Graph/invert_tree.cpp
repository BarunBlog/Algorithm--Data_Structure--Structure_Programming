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

/// Applying DFS to invert the tree
TreeNode* invertTree(TreeNode* root) {
    if (root == NULL) {
        return root;
    }

    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    invertTree(root->left);
    invertTree(root->right);

    return root;
}


int main()
{
    TreeNode* root1 = createTree();

    displayPreorder(root1);
    cout<<endl;

    invertTree(root1);

    displayPreorder(root1);
    cout<<endl;

}
