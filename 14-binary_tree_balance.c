#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - returns the balance
 * betweeen trees.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r, l;

	if (!tree)
		return (0);

	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);

	/* Check false zeros */
	if (l - r == 0)
	{
		if (tree->left && !tree->right)
			return (1);
		if (!tree->left && tree->right)
			return (-1);
	}
	return (l - r);
}
