#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is a root, 0 otherwise
 * If node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Si le nœud est NULL, ce n'est pas une racine */
	if (node == NULL)
		return (0);

	/* Si le nœud n'a pas de parent, c'est une racine */
	if (node->parent == NULL)
		return (1);

	/* Sinon, ce n'est pas une racine */
	return (0);
}
