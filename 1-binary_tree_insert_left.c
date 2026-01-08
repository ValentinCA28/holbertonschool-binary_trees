#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Vérifier si le parent existe */
	if (parent == NULL)
		return (NULL);

	/* Allocation de mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL) /* Si l'allocation échoue */
		return (NULL);

	/* Initialisation des valeurs du nouveau nœud */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Si le parent a déjà un enfant gauche */
	if (parent->left != NULL)
	{
		/* Le nouveau nœud prend l'ancien enfant gauche comme son enfant gauche */
		new_node->left = parent->left;
		/* Mettre à jour le parent de l'ancien enfant gauche */
		parent->left->parent = new_node;
	}

	/* Le nouveau nœud devient l'enfant gauche du parent */
	parent->left = new_node;

	return (new_node);
}
