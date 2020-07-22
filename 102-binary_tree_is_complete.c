#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if tree is complete
 * @tree: pointer to tree
 * Return: 1 if complete | 0 if incomplete or NULL
 **/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int r, l;

	if (!tree || (!tree->right && !tree->left))
		return (0);

	r = binary_tree_is_complete(tree->right);
	l = binary_tree_is_complete(tree->left);

	return (r + l);
}
