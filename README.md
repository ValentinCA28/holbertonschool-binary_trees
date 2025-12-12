# Binary Trees

This project is part of the Holberton School curriculum and focuses on understanding and implementing binary trees in C. It covers various operations, traversal methods, and properties of binary trees.

## Description

A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child. This project implements fundamental binary tree operations and explores different types of binary trees including Binary Search Trees (BST), AVL trees, and Heaps.

## Learning Objectives

- Understand what a binary tree is
- Learn the difference between a binary tree and a Binary Search Tree (BST)
- Understand the possible gain in time complexity compared to linked lists
- Learn about depth, height, and size of a binary tree
- Master different traversal methods (pre-order, in-order, post-order)
- Understand complete, full, perfect, and balanced binary trees
- Learn about AVL trees and Heaps

## Data Structure

The project uses the following structure for binary tree nodes:

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;    /* Binary Search Tree */
typedef struct binary_tree_s avl_t;    /* AVL Tree */
typedef struct binary_tree_s heap_t;   /* Max Binary Heap */
```

## Project Structure

```
holbertonschool-binary_trees/
├── binary_trees.h              # Header file with prototypes and structures
├── binary_tree_print.c         # Helper function to visualize trees
├── 0-binary_tree_node.c        # Creates a binary tree node
├── 1-binary_tree_insert_left.c # Inserts a node as left-child
├── 2-binary_tree_insert_right.c# Inserts a node as right-child
├── 3-binary_tree_delete.c      # Deletes an entire binary tree
├── 4-binary_tree_is_leaf.c     # Checks if a node is a leaf
├── 5-binary_tree_is_root.c     # Checks if a node is a root
├── 6-binary_tree_preorder.c    # Pre-order traversal
├── 7-binary_tree_inorder.c     # In-order traversal
├── 8-binary_tree_postorder.c   # Post-order traversal
├── 9-binary_tree_height.c      # Measures the height of a tree
├── 10-binary_tree_depth.c      # Measures the depth of a node
├── 11-binary_tree_size.c       # Measures the size of a tree
├── 12-binary_tree_leaves.c     # Counts the leaves in a tree
├── 14-binary_tree_balance.c    # Measures the balance factor
├── 15-binary_tree_is_full.c    # Checks if a tree is full
├── 18-binary_tree_uncle.c      # Finds the uncle of a node
└── README.md                   # Project documentation
```

## Implemented Functions

### Basic Operations

#### 0. Create Node
**File**: `0-binary_tree_node.c`  
**Prototype**: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`  
**Description**: Creates a binary tree node with a given parent and value.

#### 1. Insert Left
**File**: `1-binary_tree_insert_left.c`  
**Prototype**: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`  
**Description**: Inserts a node as the left-child of another node. If the parent already has a left-child, the new node takes its place and the old left-child becomes the left-child of the new node.

#### 2. Insert Right
**File**: `2-binary_tree_insert_right.c`  
**Prototype**: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`  
**Description**: Inserts a node as the right-child of another node. If the parent already has a right-child, the new node takes its place and the old right-child becomes the right-child of the new node.

#### 3. Delete Tree
**File**: `3-binary_tree_delete.c`  
**Prototype**: `void binary_tree_delete(binary_tree_t *tree);`  
**Description**: Deletes an entire binary tree using post-order traversal to free all nodes.

### Node Properties

#### 4. Is Leaf
**File**: `4-binary_tree_is_leaf.c`  
**Prototype**: `int binary_tree_is_leaf(const binary_tree_t *node);`  
**Description**: Checks if a node is a leaf (has no children). Returns 1 if leaf, 0 otherwise.

#### 5. Is Root
**File**: `5-binary_tree_is_root.c`  
**Prototype**: `int binary_tree_is_root(const binary_tree_t *node);`  
**Description**: Checks if a node is a root (has no parent). Returns 1 if root, 0 otherwise.

### Tree Traversal

#### 6. Pre-order Traversal
**File**: `6-binary_tree_preorder.c`  
**Prototype**: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`  
**Description**: Traverses a tree using pre-order traversal (Root → Left → Right).

#### 7. In-order Traversal
**File**: `7-binary_tree_inorder.c`  
**Prototype**: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`  
**Description**: Traverses a tree using in-order traversal (Left → Root → Right).

#### 8. Post-order Traversal
**File**: `8-binary_tree_postorder.c`  
**Prototype**: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`  
**Description**: Traverses a tree using post-order traversal (Left → Right → Root).

### Tree Measurements

#### 9. Height
**File**: `9-binary_tree_height.c`  
**Prototype**: `size_t binary_tree_height(const binary_tree_t *tree);`  
**Description**: Measures the height of a binary tree (number of edges on the longest path from root to leaf).

#### 10. Depth
**File**: `10-binary_tree_depth.c`  
**Prototype**: `size_t binary_tree_depth(const binary_tree_t *tree);`  
**Description**: Measures the depth of a node (number of edges from the node to the root).

#### 11. Size
**File**: `11-binary_tree_size.c`  
**Prototype**: `size_t binary_tree_size(const binary_tree_t *tree);`  
**Description**: Measures the size of a binary tree (total number of nodes).

#### 12. Leaves
**File**: `12-binary_tree_leaves.c`  
**Prototype**: `size_t binary_tree_leaves(const binary_tree_t *tree);`  
**Description**: Counts the number of leaves in a binary tree.

### Tree Properties

#### 14. Balance Factor
**File**: `14-binary_tree_balance.c`  
**Prototype**: `int binary_tree_balance(const binary_tree_t *tree);`  
**Description**: Measures the balance factor of a binary tree (difference between heights of left and right subtrees).

#### 15. Is Full
**File**: `15-binary_tree_is_full.c`  
**Prototype**: `int binary_tree_is_full(const binary_tree_t *tree);`  
**Description**: Checks if a binary tree is full (every node has either 0 or 2 children).

### Node Relationships

#### 18. Uncle
**File**: `18-binary_tree_uncle.c`  
**Prototype**: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`  
**Description**: Finds the uncle of a node (the sibling of the node's parent).

## Compilation

All files are compiled on Ubuntu 20.04 LTS using gcc with the following flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees
```

### Example Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-binary_tree_node.c 0-main.c binary_tree_print.c -o 0-node
```

## Usage Example

```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    /* Create root node */
    root = binary_tree_node(NULL, 98);
    
    /* Insert left and right children */
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    
    /* Insert more nodes */
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 56);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);

    /* Print the tree */
    binary_tree_print(root);
    
    /* Delete the tree */
    binary_tree_delete(root);
    
    return (0);
}
```

Expected output:
```
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
```

## Key Concepts

### Tree Traversal Methods

- **Pre-order** (Root → Left → Right): Used to create a copy of the tree
- **In-order** (Left → Root → Right): Used in BST to get values in sorted order
- **Post-order** (Left → Right → Root): Used to delete the tree or evaluate postfix expressions

### Tree Properties

- **Height**: Number of edges on the longest path from root to a leaf
- **Depth**: Number of edges from a node to the root
- **Size**: Total number of nodes in the tree
- **Leaf**: A node with no children
- **Full Tree**: Every node has 0 or 2 children
- **Perfect Tree**: All internal nodes have 2 children and all leaves are at the same level
- **Balanced Tree**: The heights of the left and right subtrees differ by at most 1

## Requirements

- All files are compiled on Ubuntu 20.04 LTS
- Code follows the Betty style (checked using betty-style.pl and betty-doc.pl)
- No global variables are used
- Maximum of 5 functions per file
- Standard library functions are allowed
- All function prototypes are included in `binary_trees.h`
- All header files are include guarded

## Time Complexity

| Operation | Average | Worst Case |
|-----------|---------|------------|
| Search    | O(log n)| O(n)       |
| Insert    | O(log n)| O(n)       |
| Delete    | O(log n)| O(n)       |
| Traversal | O(n)    | O(n)       |

*Note: For balanced trees like AVL, worst case is O(log n) for search, insert, and delete*

## Author

This project is part of the Holberton School curriculum.

## Resources

- [Binary tree - Wikipedia](https://en.wikipedia.org/wiki/Binary_tree)
- [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Tree Traversal](https://en.wikipedia.org/wiki/Tree_traversal)
- [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
- [Visualgo - Binary Tree Visualization](https://visualgo.net/en/bst)

## License

This project is part of the Holberton School curriculum and is for educational purposes.
