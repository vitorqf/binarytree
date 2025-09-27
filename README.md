# Binary Search Tree in C++

## Introduction

This project implements a Binary Search Tree (BST) in C++.
Binary trees are a fundamental data structure in computer science, providing efficient operations for the insertion, search, and removal of elements.

## Data Structure

### `TreeNode`

Represents a node in the binary tree.

- **Attributes:**
  - `int data`: Stores the node's value.
  - `TreeNode* left`: Pointer to the left child.
  - `TreeNode* right`: Pointer to the right child.

### `BinaryTree`

Manages the root of the binary tree.

- **Attribute:**
  - `TreeNode* root`: Pointer to the root of the tree.

## Functionalities

### Insertion (`insert`)

Adds a new node to the tree. If the value already exists, the insertion is ignored to maintain the uniqueness of elements.

### Removal (`remove`)

Removes a node from the tree. There are three cases to consider:

1. Node with no children (leaf).
2. Node with a single child.
3. Node with two children: it is replaced by the smallest node in the right subtree.

### Search (`search`)

Finds a node in the tree based on the provided value. Returns the found node or the closest node if the value does not exist.

### Traversals

- **Inorder (`inorder`)**: Traverses the tree in ascending order.
- **Preorder (`preorder`)**: Visits the root before the children.
- **Postorder (`postorder`)**: Visits the root after the children.
- **Levelorder (`levelorder`)**: Traverses the tree level by level using a queue.

### Counts

- **Number of Nodes (`nodes`)**: Returns the total number of nodes in the tree.
- **Number of Leaves (`leaves`)**: Returns the number of leaves (nodes without children).

### Printing (`print`)

Displays the tree structure hierarchically, representing levels with hyphens.

### Tree Generation (`generate`)

Fills the tree with a predefined set of values to facilitate testing and demonstrations.

## User Interface

The `menu` function offers an interactive menu that allows the user to perform the following operations:

1. **Insert**: Add a new value to the tree.
2. **Size**: Display the number of nodes in the tree.
3. **Leaf Count**: Show how many leaves are in the tree.
4. **Print**: Display the tree structure.
5. **Remove**: Delete a specific value from the tree.
6. **Generate**: Populate the tree with default values.
7. **Inorder**: Perform an inorder traversal.
8. **Preorder**: Perform a preorder traversal.
9. **Postorder**: Perform a postorder traversal.
10. **Levelorder**: Perform a levelorder traversal.

- **-1. Exit**: Terminate the program.

## Final Considerations

This implementation provides a solid foundation for understanding and manipulating binary search trees in C++. It is an excellent tool for learning and can be expanded with additional features, such as tree balancing or more advanced visual representation.

## How to Run

1. **Compile**:
   ```bash
   g++ -o binarytree main.cpp
