#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure height
 * Return: height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int	height = good_height(tree);

	if (height == -1)
		return (0);

	return (height); 
}

/**
 * good_height - measures the height of a binary tree
 *@tree: pointer to root node of a binary tree
 *Return: height or -1
 */

int good_height(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (-1);
	l_height = good_height(tree->left);
	r_height = good_height(tree->right);
	if (l_height > r_height)
		return (l_height + 1);
	else
		return (r_height + 1);
}
