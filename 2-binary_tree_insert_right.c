#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 *
 * Description: If parent already has a right-child,
 * the new node takes its place
 * and the old right-child is set as the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	/* Vérifier si le parent existe */
	if (parent == NULL)
		return (NULL);

	/* Créer un nouveau nœud avec binary_tree_node */
	right_child = binary_tree_node(parent, value);
	if (right_child == NULL) /* Si la création échoue */
		return (NULL);

	/* Le nouveau nœud prend l'ancien enfant droit comme son enfant droit */
	right_child->right = parent->right;
	/* Si le parent avait déjà un enfant droit, mettre à jour son parent */
	if (parent->right != NULL)
		parent->right->parent = right_child;

	/* Le nouveau nœud devient l'enfant droit du parent */
	parent->right = right_child;

	return (right_child);
}
