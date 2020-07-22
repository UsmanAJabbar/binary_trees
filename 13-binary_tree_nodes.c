#include "binary_trees.h"

/**
 * binary_tree_nodes - counts all non-leaf nodes
 * @tree: binary tree
 * Return: number of non-leaf nodes
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (!tree)
		return (0);

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	return (left_count + right_count + !ISLEAF(tree));
}
