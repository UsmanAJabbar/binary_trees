#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree)
	{
		left_count = binary_tree_leaves(tree->left);
		right_count = binary_tree_leaves(tree->right);
	}
	return (left_count + right_count + binary_tree_is_leaf(tree));
}
