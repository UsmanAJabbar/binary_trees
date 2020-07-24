#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_complete - checks if tree is complete
 * @tree: pointer to tree
 * Return: 1 if complete | 0 if incomplete or NULL
 **/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	/* 1. Get height of tree ONCE. Store in expected variable. */
	int expected = (int)binary_tree_height(tree);

	return (is_complete(tree, expected, 0));
}

/**
 * is_complete - checks if a tree is complete
 * @tree: pointer to tree
 * @expected: expected depth for leaves
 * @current_depth: current depth of tree
 * Return: 1 if complete | 0 if not complete
 **/
int is_complete(const binary_tree_t *tree, int expected, int current_depth)
{
	/* Check if it's a leaf. If so, check depth. Return result */
	if (ISLEAF(tree))
		return (current_depth <= expected);

	/* Check if it's NULL or pointing to a NULL. If so, return 0 */
	if (!tree || !tree->right || !tree->left)
		return (0);

	/* Check right side */
	if (is_complete(tree->right, expected, current_depth + 1) == 0)
		return (0);

	/* Check left side */
	if (is_complete(tree->left, expected, current_depth + 1) == 0)
		return (0);

	return (1);
}
