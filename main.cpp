#include <iostream> 
using namespace std; 


struct TreeNode {
    int data;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
};

struct BinaryTree {
    TreeNode* root = nullptr;
};

TreeNode* search(TreeNode* root, int data) {
    TreeNode* current = root;
    TreeNode* foundNode = nullptr;
    while (current != nullptr) {
        foundNode = current;
        if (data < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    return foundNode;
}

TreeNode* insert(TreeNode** root, int data) {
    TreeNode* newNode = new TreeNode;

    newNode->data = data;

    if (*root == nullptr) {
        *root = newNode;
        return *root;
    }

    TreeNode* parent = search(*root, data);

    if (newNode->data == parent->data) {
        cout << "Node with the same value (17) already exists in the tree. Skipping." << endl;
        return nullptr;
    }

    if (data < parent->data) {
        parent->left = newNode;
    } else {
        parent->right = newNode;
    }

    return newNode;
}

int size(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }

    return 1 + size(root->left) + size(root->right);
}

int leafCount(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }

    if (root->left == nullptr && root->right == nullptr) {
        return 1;
    }

    return leafCount(root->left) + leafCount(root->right);
}

void print(TreeNode* root, int level = 0) {
    if (root == nullptr) {
        return;
    }

    print(root->right, level + 1);
    
    for (int i = 0; i < level; i++) {
        cout << "-";
    }

    cout << root->data << endl;

    print(root->left, level + 1);
}


int main() 
{ 
    BinaryTree tree;
    insert(&tree.root, 10);
    insert(&tree.root, 5);
    insert(&tree.root, 15);
    insert(&tree.root, 3);
    insert(&tree.root, 7);
    insert(&tree.root, 8);
    insert(&tree.root, 12);
    insert(&tree.root, 11);
    insert(&tree.root, 17);
    insert(&tree.root, 17);

    cout << "Find out 17 in the tree: " << search(tree.root, 17)->data << endl;
    cout << "Size of the tree: " << size(tree.root) << endl;
    cout << "Leaf count: " << leafCount(tree.root) << endl << endl;

    print(tree.root);

    cout << endl;

	return 0; 
} 
