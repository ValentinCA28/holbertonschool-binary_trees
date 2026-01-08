#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Performs in-order traversal (Left, Node, Right) of the tree
 * and calls func for each node with the node's value as parameter.
 * If tree or func is NULL, does nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Si l'arbre ou la fonction est NULL, ne rien faire */
	if (tree == NULL || func == NULL)
		return;

	/* Parcourir d'abord le sous-arbre gauche */
	binary_tree_inorder(tree->left, func);

	/* Traiter le nœud actuel */
	func(tree->n);

	/* Parcourir enfin le sous-arbre droit */
	binary_tree_inorder(tree->right, func);
}
