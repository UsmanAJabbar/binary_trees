#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_size - returns size of a binary tree
 * @tree: pointer to tree
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (!tree)
		return (0);

	left_count = (binary_tree_size(tree->left));
	right_count = (binary_tree_size(tree->right));

	return (left_count + right_count + 1);
}
