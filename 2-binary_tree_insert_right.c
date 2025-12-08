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

	if (parent == NULL)
		return (NULL);

	right_child = binary_tree_node(parent, value);
	if (right_child == NULL)
		return (NULL);

	right_child->right = parent->right;
	if (parent->right != NULL)
		parent->right->parent = right_child;

	parent->right = right_child;

	return (right_child);
}
