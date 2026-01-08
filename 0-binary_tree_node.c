#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 *
 * Description: Allocates memory for a new binary tree node,
 *              initializes its value, parent, left and right pointers.
 *              When called for the root, parent is NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	/* Allocation de mémoire pour le nouveau nœud */
	new = malloc(sizeof(binary_tree_t));

	/* Si l'allocation échoue, retourner NULL */
	if (!new)
		return (NULL);
	/* Initialisation de la valeur du nœud */
	new->n = value;
	/* Liaison avec le nœud parent */
	new->parent = parent;
	/* Initialisation des enfants à NULL (pas d'enfants pour l'instant) */
	new->left = NULL;
	new->right = NULL;

	/* Retourner le pointeur vers le nouveau nœud créé */
	return (new);
}
