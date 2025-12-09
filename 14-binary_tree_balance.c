#include "binary_trees.h"

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
