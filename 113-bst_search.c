#include "binary_trees.h"

/**
 * bst_search - searches for a value in a binary search tree
 * @tree: pointer to tree
 * @value: value to search for
 * Return: pointer to value in tree
 **/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	if (value == tree->n)
		return ((bst_t *)tree);

	if (value > tree->n)
		return (bst_search(tree->right, value));

	return (bst_search(tree->left, value));
}
