#include <iostream> 
#include <queue>
using namespace std; 

struct TreeNode {
    int data;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
};

struct BinaryTree {
    TreeNode* root = nullptr;
};

TreeNode* minimum(TreeNode* root) {
    TreeNode* current = root;
    while (current->left != nullptr) {
        current = current->left;
    }
    return current;
}

TreeNode* maximum(TreeNode* root) {
    TreeNode* current = root;
    while (current->right != nullptr) {
        current = current->right;
    }
    return current;
}

void visit(TreeNode* node) {
    cout << node->data << " ";
}

void inorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    inorder(root->left);
    visit(root);
    inorder(root->right);
}

void preorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    visit(root);
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    visit(root);
}

void levelorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        visit(current);

        if (current->left != nullptr) {
            q.push(current->left);
        }

        if (current->right != nullptr) {
            q.push(current->right);
        }
    }
}


TreeNode* remove(TreeNode* root, int data) {
    if (root == nullptr) {
        return nullptr;
    }

    if (data < root->data) {
        root->left = remove(root->left, data);
    } else if (data > root->data) {
        root->right = remove(root->right, data);
    } else {
        if (root->left != nullptr && root->right != nullptr) {
            TreeNode* min = minimum(root->right);
            root->data = min->data;
            root->right = remove(root->right, min->data);
        } else {
            TreeNode* temp = root;
            if (root->left != nullptr) {
                root = root->left;
            } else {
                root = root->right;
            }
            delete temp;
        }
    }

    return root;
}

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
        cout << "Node with the same value"  << " (" << newNode->data << ") " << "already exists in the tree. Skipping." << endl;
        return nullptr;
    }

    if (data < parent->data) {
        parent->left = newNode;
    } else {
        parent->right = newNode;
    }

    return newNode;
}

int nodes(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }

    return 1 + nodes(root->left) + nodes(root->right);
}

int leaves(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }

    if (root->left == nullptr && root->right == nullptr) {
        return 1;
    }

    return leaves(root->left) + leaves(root->right);
}

void print(TreeNode* root, int level = 0) {
    if (root == nullptr) {
        return;
    }

    
    for (int i = 0; i < level; i++) {
        cout << "-";
    }

    cout << root->data << endl;

    print(root->left, level + 1);
    print(root->right, level + 1);
}

void generate(BinaryTree &tree) {
    insert(&tree.root, 10);
    insert(&tree.root, 5);
    insert(&tree.root, 15);
    insert(&tree.root, 3);
    insert(&tree.root, 7);
    insert(&tree.root, 12);
    insert(&tree.root, 17);
}

void menu(BinaryTree &tree) {
    cout << "0. Insert" << endl;
    cout << "1. Size" << endl;
    cout << "2. Leaf count" << endl;
    cout << "3. Print" << endl;
    cout << "4. Remove" << endl;
    cout << "5. Generate" << endl;
    cout << "6. Inorder" << endl;
    cout << "7. Preorder" << endl;
    cout << "8. Postorder" << endl;
    cout << "9. Levelorder" << endl;
    cout << "-1. Exit" << endl;

    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 0:
            cout << "Enter the value to insert: ";
            int value;
            cin >> value;
            insert(&tree.root, value);
            break;
        case 1:
            cout << "Size of the tree: " << nodes(tree.root) << endl;
            break;
        case 2:
            cout << "Leaf count: " << leaves(tree.root) << endl;
            break;
        case 3:
            print(tree.root);
            break;
        case 4:
            cout << "Enter the value to remove: ";
            int removeValue;
            cin >> removeValue;
            remove(tree.root, removeValue);
            break; 
        case 5:
            cout << "Generating tree..." << endl;
            generate(tree);
            break;
        case 6:
            cout << "Inorder: ";
            inorder(tree.root);
            cout << endl;
            break;
        case 7:
            cout << "Preorder: ";
            preorder(tree.root);
            cout << endl;
            break;
        case 8:
            cout << "Postorder: ";
            postorder(tree.root);
            cout << endl;
            break;
        case 9:
            cout << "Levelorder: ";
            levelorder(tree.root);
            cout << endl;
            break;
        case -1:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
    }
}

int main() 
{ 
    BinaryTree tree;

    while (true) {
        menu(tree);
    }

    return 0; 
}