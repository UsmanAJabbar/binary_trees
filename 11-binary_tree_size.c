#include "binary_trees.h"
#include <stdio.h>

/*
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
