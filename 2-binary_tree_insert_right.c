#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child
 * @value: the value to store in the new node
 * Return: new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *a_node, *c_node, *d_node;

	d_node = binary_tree_node(parent, value);
	if (d_node == NULL)
		return (NULL);
	a_node = parent;
	c_node = parent->right;
	d_node->right = c_node;
	a_node->right = d_node;
	if (c_node != NULL)
		c_node->parent = d_node;
	return (d_node);
}
