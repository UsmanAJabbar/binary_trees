#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - checks if a tree is balanced
 * @tree: pointer to tree
 * Return: 1 if balanced | o if unbalanced or NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r, l;

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
