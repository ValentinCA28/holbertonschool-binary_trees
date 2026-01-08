#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal
 *                        (root -> left -> right)
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node.
 *        The function takes the value of the node (int) as parameter.
 *
 * Description: If tree or func is NULL, do nothing.
 *              The value in each node is passed to the function func.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Si l'arbre ou la fonction est NULL, ne rien faire */
	if (tree == NULL || func == NULL)
		return;

	/* Traiter d'abord le nœud actuel (racine) */
	func(tree->n);
	/* Puis parcourir le sous-arbre gauche */
	binary_tree_preorder(tree->left, func);
	/* Enfin parcourir le sous-arbre droit */
	binary_tree_preorder(tree->right, func);
}
