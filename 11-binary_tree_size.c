#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure height
 * Return: size or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t node_count, l_size, r_size;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);
	node_count = l_size + r_size + 1;
	return (node_count);
}
