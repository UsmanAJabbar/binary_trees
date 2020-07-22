#include "binary_trees.h"

/**
 * binary_tree_leaves - returns number of leaves in a binary tree
 * @tree: pointer to tree
 * Return: number of leaves
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree)
	{
		left_count = binary_tree_leaves(tree->left);
		right_count = binary_tree_leaves(tree->right);
	}
	return (left_count + right_count + ISLEAF(tree));
}
