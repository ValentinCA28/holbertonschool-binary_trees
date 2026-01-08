#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node
 * in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	/* Si le nœud est NULL, la profondeur est 0 */
	if (tree == NULL)
		return (0);

	/* Remonter jusqu'à la racine en comptant les niveaux */
	while (tree->parent != NULL)
	{
		count++; /* Incrémenter le compteur à chaque niveau */
		tree = tree->parent; /* Passer au parent */
	}
	return (count);
}
