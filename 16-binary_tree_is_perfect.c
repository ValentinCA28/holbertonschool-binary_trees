#include "binary_trees.h"

/**
 * tree_height - Helper function to calculate tree height
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree
 */
static int tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = 1 + tree_height(tree->left);

	if (tree->right != NULL)
		right_height = 1 + tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}

/**
 * tree_size - Helper function to calculate tree size
 * @tree: Pointer to the root node
 *
 * Return: Number of nodes in the tree
 */
static size_t tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + tree_size(tree->left) + tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 * If tree is NULL, return 0
 *
 * Description: A perfect binary tree is a binary tree in which all interior
 * nodes have two children and all leaves are at the same level. A perfect
 * tree with height h has 2^(h+1) - 1 nodes.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;
	size_t nodes, perfect_nodes;

	if (tree == NULL)
		return (0);

	height = tree_height(tree);
	nodes = tree_size(tree);
	perfect_nodes = (1 << (height + 1)) - 1;

	return (nodes == perfect_nodes ? 1 : 0);
}
