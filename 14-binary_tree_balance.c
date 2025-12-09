#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree, or 0 if tree is NULL
 *
 * Description: The height of a tree is defined as the number of edges
 * on the longest path from the root to a leaf node.
 * A tree with only one node has height 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor (height_left - height_right), or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height_left = (int)binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		height_right = (int)binary_tree_height(tree->right) + 1;

	return (height_left - height_right);
}
