#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Size of the tree (number of nodes), or 0 if tree is NULL
 *
 * Description: The size of a tree is the total number of nodes it contains.
 * This includes the root node and all its descendants.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Si l'arbre est NULL, la taille est 0 */
	if (tree == NULL)
		return (0);

	/* Taille = 1 (nœud actuel) + taille sous-arbre gauche + taille sous-arbre droit */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
