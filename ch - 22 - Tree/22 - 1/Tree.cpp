#include <iostream>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

class preOrder
{
public:
    void preOrderT(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        preOrderT(root->left);
        preOrderT(root->right);sns
    }
    void inOrderT(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        inOrderT(root->left);
        cout << root->data << " ";
        inOrderT(root->right);
    }
    void postOrderT(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        postOrderT(root->left);
        postOrderT(root->right);
        cout << root->data << " ";
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->right = new TreeNode(6);

    preOrder preOrder;
    cout << "Pre-order Traversal: ";
    preOrder.preOrderT(root);
    cout << endl;
    cout << "In-order Traversal: ";
    preOrder.inOrderT(root);
    cout << endl;
    cout << "Post-order Traversal: ";
    preOrder.postOrderT(root);
    cout << endl;
    return 0;
}