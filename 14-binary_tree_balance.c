#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - checks if a tree is balanced
 * @tree: pointer to tree
 * Return: 1 if balanced | o if unbalanced or NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r, l, balance;

	if (!tree)
		return (0);

	r = binary_tree_height(tree->right);
	l = binary_tree_height(tree->left);
	balance = l - r;

	/* Check false zeros */
	if (balance == 0)
		balance = ISLEAF(tree->left) - ISLEAF(tree->right);

	return (balance);
}
