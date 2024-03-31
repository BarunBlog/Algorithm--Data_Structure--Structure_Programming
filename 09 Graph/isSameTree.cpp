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

bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == NULL && q == NULL) {
        return true;
    }
    if (p == NULL || q == NULL || p->val != q->val) {
        return false;
    }

    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main()
{
    /// Create two same tree
    TreeNode* root1 = createTree();
    TreeNode* root2 = createTree();

    //displayPreorder(root1);

    cout<<isSameTree(root1, root2)<<endl;
}
