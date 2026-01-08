#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise (including if node is NULL)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Si le nœud est NULL, ce n'est pas une feuille */
	if (node == NULL)
		return (0);

	/* Si le nœud n'a pas d'enfants (gauche et droit sont NULL) */
	if (node->left == NULL && node->right == NULL)
		return (1); /* C'est une feuille */

	/* Sinon, ce n'est pas une feuille */
	return (0);
}
