#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - finds a tree balance factor
 * @tree: pointer to tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r, l;

	if (!tree || ISLEAF(tree))
		return (0);

	if (ISLEAF(tree->right))
		r = 1;
	else
		r = binary_tree_height(tree->right);

	if (ISLEAF(tree->left))
		l = 1;
	else
		l = binary_tree_height(tree->left);

	return (l - r);
}
