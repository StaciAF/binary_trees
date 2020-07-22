#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - counts nodes in binary tree
 * @tree: pointer to the root node of the tree to measure balance factor
 * Return: balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_h, r_h, balance;

	if (tree == NULL)
		return (0);
	l_h = good_height(tree->left) + 1;
	r_h = good_height(tree->right) + 1;
	balance = l_h - r_h;
	return (balance);
}
