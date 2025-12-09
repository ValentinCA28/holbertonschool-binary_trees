#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Recursively deletes all nodes in the tree,
 * freeing the allocated memory. If tree is NULL, does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Recursively delete left subtree */
	binary_tree_delete(tree->left);

	/* Recursively delete right subtree */
	binary_tree_delete(tree->right);

	/* Free the current node */
	free(tree);
}
