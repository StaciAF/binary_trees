#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a given node
 * @node: check for sibling of this
 *
 * Return: other child node of parent or null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent, *child1, *child2;

	if (node == NULL)
		return (NULL);

	parent = node->parent;

	if (parent == NULL)
		return (NULL);

	child1 = parent->left;
	child2 = parent->right;

	if (child1 == node)
		return (child2);
	return (child1);
}
