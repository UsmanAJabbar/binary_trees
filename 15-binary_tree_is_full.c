#include "binary_trees.h"
#define ISFULL(a) binary_tree_is_full(a)

/**
 * binary_tree_is_full - checks if a tree is full
 * @tree: pointer to the root of the tree
 * Return: balance of tree
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{

	/* Return 0 if tree is NULL */
	if (!tree)
		return (0);

	/* Return 1 if leaf */
	if (ISLEAF(tree))
		return (1);

	/* Check children. */
	return (ISFULL(tree->right) && ISFULL(tree->left));
}
