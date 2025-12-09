#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count nodes
 *
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 *
 * Description: A node with at least 1 child means it has either a left child,
 * a right child, or both. Leaf nodes (nodes with no children) are not counted.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
