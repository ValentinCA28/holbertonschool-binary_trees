#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves
 *
 * Description: A leaf is a node with no children
 * (left == NULL && right == NULL)
 * Return: number of leaves in the tree, or 0 if tree is NULL
 * Recrusion > return directly size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Si l'arbre est NULL, pas de feuilles */
	if (tree == NULL)
		return (0);
	/* Si pas d'enfant alors c'est une feuille = 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* Compter les feuilles dans le sous-arbre gauche et droit */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
