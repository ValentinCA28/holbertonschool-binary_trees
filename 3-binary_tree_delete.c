#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Description: Recursively deletes all nodes in the tree,
 * freeing the allocated memory. If tree is NULL, does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Si l'arbre est NULL, rien à faire */
	if (tree == NULL)
		return;

	/* Supprimer récursivement le sous-arbre gauche */
	binary_tree_delete(tree->left);

	/* Supprimer récursivement le sous-arbre droit */
	binary_tree_delete(tree->right);

	/* Libérer la mémoire du nœud actuel */
	free(tree);
}
