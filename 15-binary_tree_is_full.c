#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *@tree: tree to check
 * Return: True(1) or False(0)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	bool l_is_full = TRUE;
	bool r_is_full = TRUE;
	bool is_leaf;

	if (tree == NULL)
		return (0);

	is_leaf = binary_tree_is_leaf(tree);
	if (tree->left != NULL)
		l_is_full = binary_tree_is_full(tree->left);

	if (tree->right != NULL)
		r_is_full = binary_tree_is_full(tree->right);

	if (l_is_full == FALSE || r_is_full == FALSE)
		return (FALSE);

	if (tree == NULL)
		return (TRUE);

	if (is_leaf)
		return (TRUE);

	if (tree->left != NULL && tree->right != NULL)
		return (TRUE);

	return (FALSE);
}
