#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if no sibling exists
 * If node is NULL or parent is NULL, return NULL
 *
 * Description: A sibling is another node that shares the same parent.
 * If the given node is a left child, its sibling is the right child of
 * the parent. If it's a right child, its sibling is the left child.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
