#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves
 *
 * Description: A leaf is a node with no children
 * (left == NULL && right == NULL)
 * Return: number of leaves in the tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0;

	if (tree == NULL)
		return (0);
	/* Si pas d'enfant alors leaf = 1 (node) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* compte les enfants de gauche et droite = total leaf per node */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
