#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert left-child
 * @value: value to store in the new node
 * Return: new node or NULL on failure
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *a_node, *b_node, *d_node;

	if (parent == NULL)
		return (NULL);
	d_node = binary_tree_node(parent, value);
	if (d_node == NULL)
		return (NULL);
	a_node = parent;
	b_node = parent->left;
	d_node->left = b_node;
	a_node->left = d_node;
	if (b_node != NULL)
		b_node->parent = d_node;
	return (d_node);
}
