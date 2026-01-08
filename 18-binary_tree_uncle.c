#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL
 *         or if node has no uncle (root or child of root)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	/* Si le nœud est NULL, pas d'oncle */
	if (node == NULL)
		return (NULL);

	/* Si pas de parent ou pas de grand-parent, pas d'oncle */
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* Récupérer le grand-parent */
	grandparent = node->parent->parent;

	/* Si le parent est l'enfant gauche, l'oncle est l'enfant droit */
	if (grandparent->left == node->parent)
		return (grandparent->right);
	/* Sinon, l'oncle est l'enfant gauche */
	else
		return (grandparent->left);
}
