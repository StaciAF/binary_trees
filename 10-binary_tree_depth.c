#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in binary tree
 * @tree: pointer to the root node of the tree to measure height
 * Return: depth or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp;

	if (tree == NULL)
		return (0);
	temp = tree;
	while (temp->parent != NULL)
	{
		depth += 1;
		temp = temp->parent;
	}
	return (depth);
}
