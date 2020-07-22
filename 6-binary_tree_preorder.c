#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses binary tree with pre-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * value to be passed as parameter
 * Return: Nothing, void prototype
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, (*func));
	binary_tree_preorder(tree->right, (*func));
}
