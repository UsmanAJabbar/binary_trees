#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include <stdio.h>

/**
 * binary_tree_balance - finds a tree balance factor
 * @tree: pointer to tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (!tree)
		return (0);

	if (tree->right)
		r = binary_tree_height(tree->right) + 1;

	if (tree->left)
		l = binary_tree_height(tree->left) + 1;

	return (l - r);
}
