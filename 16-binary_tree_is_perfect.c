#include "binary_trees.h"
#include "12-binary_tree_leaves.c"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - check if tree is a perfect tree
 * @tree: binary tree to check
 *
 * Return: True(1) or False(0)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;
	int leafs = 0;

	if (tree == NULL)
		return (FALSE);

	height = good_height(tree);
	leafs = binary_tree_leaves(tree);

	if (leafs == _pow(2, height))
		return (TRUE);

	return (FALSE);
}

/**
 * _pow - calculate result of a given base and a power
 * @base: base number
 * @power: number to raise the base of
 *
 * Return: Result
 */

int _pow(int base, int power)
{
	int result = base, i;

	for (i = 1; i < power; i++)
	{
		result *= base;
	}

	return (result);
}
