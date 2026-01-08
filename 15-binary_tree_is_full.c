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
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: A binary tree is full if every node has either 0 or 2 children
 *              (no node has only one child).
 *              Interestingly, in a binary tree, this property is equivalent
 *              to having an odd number of nodes.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 *         If tree is NULL, returns 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Si l'arbre est NULL, ce n'est pas un arbre complet */
	if (tree == NULL)
		return (0);

	/* Un arbre binaire est complet si sa taille est impaire */
	/* (chaque nœud a 0 ou 2 enfants) */
	return (binary_tree_size(tree) % 2 == 1);
}
