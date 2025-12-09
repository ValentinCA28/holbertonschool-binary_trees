#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Performs in-order traversal (Left, Node, Right) of the tree
 * and calls func for each node with the node's value as parameter.
 * If tree or func is NULL, does nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* Call function on current node */
	func(tree->n);

	/* Traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
