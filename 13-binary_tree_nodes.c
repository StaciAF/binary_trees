#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_nodes - counts nodes in binary tree
 * @tree: pointer to the root node of the tree to measure height
 * Return: node count or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size, leaves;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	leaves = binary_tree_leaves(tree);
	return (size - leaves);
}
